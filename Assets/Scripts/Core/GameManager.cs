using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using Random = UnityEngine.Random;
public class GameManager : Singleton<GameManager>
{
    [SerializeField] LevelManager levelManager;
    public LevelManager LevelManager => levelManager;
    public UserData userData
    {
        get; private set;
    }
    protected override void Awake()
    {
        base.Awake();
        Game.Launch();
        userData = Game.Data.Load<UserData>();
    }

    void Start()
    {
        //UILoading loading = GameUI.Instance.Get<UILoading>();
        //loading.Load(null, (Action)(() =>
        //{
        //    loading.Hide();
        //    ChangeState(GameStates.Home);
        //}));
        GameUI.Instance.Get<UIBG>().Show();
        GameUI.Instance.Get<UIMain>().Show();
    }

    [SerializeField] private GameStates _state = GameStates.Start;
    public void ChangeState(GameStates newState)
    {
        if (newState == _state) return;
        ExitCurrentState();
        _state = newState;
        EnterNewState();
    }
    private void EnterNewState()
    {
        
        switch (_state)
        {
            case GameStates.Tutorial:
                break;
            case GameStates.Home:
                //LoadNamesFromJson();
                //PushDataRanking();
                //PushDataQuest();

                //GameUI.Instance.Get<UIHome>().Show();
                //GameUI.Instance.Get<UIPopUpCoin>().Show();
                break;
            case GameStates.Start:
                break;
            case GameStates.Play:
               
                break;
            case GameStates.Pause:
                break;
            case GameStates.Win:
                levelManager.DestroyCurrentLevelObject();
                userData.currentLevel++;
                GameUI.Instance.Get<UIPopupWin>().Show();
                GameUI.Instance.Get<UIInGameTop>().Hide();
                break;
            case GameStates.Lose:
                levelManager.DestroyCurrentLevelObject();
                GameUI.Instance.Get<UIPopupLose>().Show();
                GameUI.Instance.Get<UIInGameTop>().Hide();
                break;
            default:
                break;
        }
    }

    private void ExitCurrentState()
    {
        switch (_state)
        {
            case GameStates.Tutorial:
                break;
            case GameStates.Home:
                break;
            case GameStates.Start:
                break;
            case GameStates.Play:
                break;
            case GameStates.Pause:
                break;
            case GameStates.Win:
                break;
            case GameStates.Lose:
                break;
            default:
                break;
        }
    }

    //private NamesData namesData;
    //private RankDataWrapper rankDataWrapper;

    //void LoadNamesFromJson()
    //{
    //    // Load the JSON file from the Resources folder
    //    TextAsset jsonFile = Resources.Load<TextAsset>("RandomName");

    //    if (jsonFile != null)
    //    {
    //        namesData = JsonUtility.FromJson<NamesData>(jsonFile.text);
    //    }
    //    else
    //    {
    //        Debug.LogError("JSON file not found in Resources!");
    //    }

    //    TextAsset jsonTextAsset = Resources.Load<TextAsset>("RankConfigData");

    //    if (jsonTextAsset != null)
    //    {
    //        // Deserialize the JSON into the RankDataWrapper and populate the rankData list
    //        rankDataWrapper = JsonUtility.FromJson<RankDataWrapper>(jsonTextAsset.text);
    //    }
    //    else
    //    {
    //        Debug.LogError("RankConfigData.json file not found in Resources!");
    //    }
    //}

    //List<RacingData> GetRandomNamesRacking(int n)
    //{
    //    if (namesData != null && namesData.names != null && namesData.names.Count >= n)
    //    {
    //        // Create a list of RacingData from the names
    //        List<RacingData> racingDataList = new List<RacingData>();
    //        foreach (string name in namesData.names)
    //        {
    //            racingDataList.Add(new RacingData { name = name });
    //        }

    //        // Create a copy of the list to avoid modifying the original data
    //        List<RacingData> racingDataCopy = new List<RacingData>(racingDataList);

    //        // Shuffle the list
    //        for (int i = 0; i < racingDataCopy.Count; i++)
    //        {
    //            RacingData temp = racingDataCopy[i];
    //            int randomIndex = Random.Range(i, racingDataCopy.Count);
    //            racingDataCopy[i] = racingDataCopy[randomIndex];
    //            racingDataCopy[randomIndex] = temp;

    //            racingDataList[i].rank = i + 2;
    //        }

    //        // Return the first n RacingData objects
    //        return racingDataCopy.GetRange(0, n);
    //    }
    //    else
    //    {
    //        Debug.LogError("Not enough names to select the requested number.");
    //        return new List<RacingData>();
    //    }
    //}

    //public void StartDataRanking()
    //{
    //    userData.listRacingData.Clear();
    //    List<RacingData> Data = GetRandomNamesRacking(4);
    //    userData.listRacingData = Data;
    //}

    //public List<RankDataPlayer> GetRandomNamesRanking(int n)
    //{
    //    if (namesData != null && namesData.names != null && namesData.names.Count >= n)
    //    {
    //        // Create a list of Rank from the names
    //        List<RankDataPlayer> racingDataList = new List<RankDataPlayer>();
    //        foreach (string name in namesData.names)
    //        {
    //            racingDataList.Add(new RankDataPlayer { NamePlayer = name });
    //        }

    //        // Shuffle the list
    //        for (int i = 0; i < racingDataList.Count; i++)
    //        {
    //            RankDataPlayer temp = racingDataList[i];
    //            int randomIndex = Random.Range(i, racingDataList.Count);
    //            racingDataList[i] = racingDataList[randomIndex];
    //            racingDataList[randomIndex] = temp;
    //        }

    //        // Get the first n Rank objects
    //        List<RankDataPlayer> finalRanking = racingDataList.GetRange(0, n);

    //        // Add "YOU" to the end of the final list
    //        finalRanking.Add(new RankDataPlayer { NamePlayer = "You" });

    //        // Assign rank, score, and reward from rankData
    //        for (int i = 0; i < finalRanking.Count; i++)
    //        {
    //            if (i <= n)  // Ensure there's a corresponding rankData entry
    //            {
    //                finalRanking[i].Rank = rankDataWrapper.rankConfigs[i].rank;
    //                finalRanking[i].Score = rankDataWrapper.rankConfigs[i].score;
    //                finalRanking[i].Reward = rankDataWrapper.rankConfigs[i].reward;
    //            }
    //            else
    //            {
    //                Debug.LogWarning("Not enough rank data to assign to all ranks.");
    //                break;
    //            }
    //        }

    //        return finalRanking;
    //    }
    //    else
    //    {
    //        Debug.LogError("Not enough names to select the requested number.");
    //        return new List<RankDataPlayer>();
    //    }
    //}


    //public void PushDataRanking()
    //{
    //    if (!userData.isSetUpDataRanking)
    //    {
    //        LoadNamesFromJson();
    //        userData.ranking.Clear();
    //        List<RankDataPlayer> Data = GetRandomNamesRanking(49);
    //        userData.ranking = Data;
    //        userData.isSetUpDataRanking = true;

    //        DateTime currentTime = DateTime.Now;
    //        DateTime dateLeaderBoard = currentTime.AddDays(7);
    //        userData.dateLeaderBoard = dateLeaderBoard.ToString();

    //    }
    //}

    //public void PushDataQuest()
    //{
    //    if (!userData.isSetUpDataQuest)
    //    {
    //        DateTime currentTime = DateTime.Now;
    //        DateTime date = currentTime.AddHours(24);
    //        userData.dateQuest = date.ToString();
    //        userData.isSetUpDataQuest = true;
    //    }
    //}

    //public void UpdateRank()
    //{
    //    UpdatePlayerScore("You", userData.ScorePlayer);
    //}

    //public void UpdatePlayerScore(string playerName, int newScore)
    //{
    //    Debug.Log("Update");

    //    var player = userData.ranking.FirstOrDefault(p => p.NamePlayer == playerName);
    //    if (player != null)
    //    {
    //        player.Score = newScore;
    //        UpdateRanking();
    //    }
    //}

    //public void UpdateRanking()
    //{
    //    var sortedRanking = userData.ranking.OrderByDescending(p => p.Score).ToList();

    //    for (int i = 0; i < sortedRanking.Count; i++)
    //    {
    //        sortedRanking[i].Rank = i + 1;
    //    }
    //    userData.ranking = sortedRanking;
    //    userData.lastIndexLeaderBoard = GetPlayerIndex("You");
    //}

    //public int GetPlayerIndex(string playerName)
    //{
    //    var player = userData.ranking
    //                    .FirstOrDefault(p => p.NamePlayer == playerName);

    //    if (player != null)
    //    {
    //        return userData.ranking.IndexOf(player);
    //    }

    //    return -1;
    //}

    private void Update()
    {
        //if (Input.GetKey(KeyCode.A))
        //{
        //    GameUI.Instance.Get<UIPopupRank>().ShowNoMove();
        //}

        //if (Input.GetKey(KeyCode.S))
        //{
        //    GameUI.Instance.Get<UIPopupSpin>().Show();
        //}

        if (Input.GetKey(KeyCode.D))
        {
            ChangeState(GameStates.Win);
        }
    }

    //public void NextLevelAction()
    //{
    //    userData.currentMap++;
    //    if (userData.currentMap >= 14)
    //    {
    //        GameUI.Instance.HideAll();
    //        ChangeState(GameStates.Start);
    //        GameUI.Instance.Get<UIPopupRank>().ShowNoMove();
    //    }
    //    else
    //    {
    //        NextLevel();
    //    }
    //}

    public void NextLevel()
    {
        GameUI.Instance.HideAll();
        ChangeState(GameStates.Home);
    }
}

public enum GameStates
{
    Tutorial, Home, Start, Play, Pause, Win, Lose,
}

[System.Serializable]
public class NamesData
{
    public List<string> names;
}

[System.Serializable]
public class RankDataWrapper
{
    public List<RankData> rankConfigs;
}

[System.Serializable]
public class RankData
{
    public int rank;
    public int score;
    public string reward;
}

[System.Serializable]
public class RankDataPlayer
{
    public string NamePlayer;
    public int Rank;
    public int Score;
    public string Reward;
}