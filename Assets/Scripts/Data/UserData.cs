using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class UserData : SavePlayerPrefs
{
    public int currentLevel;
    
}

[Serializable]

public class DailyBonus
{
    public string dateTracking = DateTime.Now.ToString();
    public int currentIndex = -1;
}

[Serializable]

public class RacingData
{
    public string name;
    public int rank;
    public int value;
}


[Serializable]
public class MapData
{
    public int roomBaseID;
    public int idMap;
    public int mapExp;
    public int mapLevel;
    public int levelLoader;
    public int levelStaffCanteen;
    public int levelStaffCanteen2;
    public int levelReception;
    public List<bool> dataSkinReceptions=new();
    public int moneyUpgradeLoader;
    public int moneyUpgradeStaffCanteen;
    public int moneyUpgradeReception;
    public int moneyUpgradeZone;
   
    public float timeIncrementalProgressGame;

    public MapData(int id)
    {
        idMap = id;
        mapLevel = 1;
        moneyUpgradeLoader = 0;
        moneyUpgradeStaffCanteen = 0;
        moneyUpgradeReception = 0;
    }

    
}

[Serializable]
public class TutorialsData
{
    public bool script2;
    public bool script3;
    public bool script4;
    public bool script5;
    public bool script6;
    public bool script8WakeUpDoctor;
    public bool script9;//het thuoc
    public bool script10;//het thuoc2
    public bool script11;//lay giay vs
    public bool script12;
    //public bool script12b;
    public bool script13;
    public bool script14;//anh da den be hom
    public bool script15;//atm
    public List<int> CompletedTutoS = new();
    public bool tutorialDropMoney;
    public bool hasCreateMoneyItemAtPlayerPos = false;
    public bool hasCreateSpeedItemAtPlayerPos = false;
    public bool hasFreeSpeedItem = false;
    //WareHouse show item
    public bool hasShowItemMedince;
    public bool hasShowItemToiletPaper;
    public bool hasShowItemThermometer;

    public bool hasActiceArrow;

   
}

[Serializable]
public class DataTrackingFirebase
{
    public string timeStartReward = string.Empty;
    public string timeStartIntern = string.Empty;
    public string timeStartAppOpen = string.Empty;
    public string timeCanShowOpenADS = DateTime.Now.ToString();
    public List<int> trackingTimeIncrementalProgressGame = new();

    public int currentDataMapIndex = 0;
    public List<DataSession> dataMaps =
    new List<DataSession> { new DataSession(), new DataSession(), new DataSession(), new DataSession(), new DataSession(), new DataSession() };

   public int currentDataSession = 0;
    public List<DataSession> dataSessionS =
   new List<DataSession> { new DataSession(), new DataSession(), new DataSession(), new DataSession(), new DataSession()};


   
}

[Serializable]
public class DataSession
{
    public float minutes;
    public bool completed;
    public bool status;

    public DataSession(float minutes=0, bool completed=false, bool status=false)
    {
        this.minutes = minutes;
        this.completed = completed;
        this.status = status;
    }
}