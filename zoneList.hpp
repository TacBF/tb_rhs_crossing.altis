#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}           , {}    , 1      , {}          , 0      },
// You must not link first flags to attacking side's XRAY base for A&D, otherwise game ends after first flag.
{ 1, TEAM_RED   , SPAWN_XRAY,       {2,3,4,11}     , {}    , 1      , {}        , 0    , "Spetsnaz Main Base" },
{ 2, TEAM_BLUE    , SPAWN_NEVER,    {5}   , {3} , 1      , {}        , 0    , "%1" },
{ 3, TEAM_BLUE    , SPAWN_NEVER,    {5,6}   , {2,4} , 1      , {}        , 0    , "%1" },
{ 4, TEAM_BLUE    , SPAWN_NEVER,    {6}     , {3} , 1      , {}        , 0    , "%1" },
{ 5, TEAM_BLUE    , SPAWN_NEVER,    {7}         , {6} , 1      , {}        , 0    , "%1" },
{ 6, TEAM_BLUE    , SPAWN_NEVER,    {7}         , {5} , 1      , {}        , 0    , "%1" },
{ 7, TEAM_BLUE    , SPAWN_NEVER,    {8}         , {}    , 1      , {}        , 0    , "%1" },
{ 8, TEAM_BLUE    , SPAWN_XRAY,     {}          , {}    , 1      , {}        , 0    , "Jordan Main Base" },
{ 9, TEAM_RED   , SPAWN_INSTANT,  {}          , {}    , 1      , {1}       , 1    , "South Bay" },
{ 10, TEAM_RED   , SPAWN_LARGEFB,  {}          , {}    , 1      , {1}       , 1    , "Air Base" },
{ 11, TEAM_BLUE    , SPAWN_NEVER,    {}         , {} , 1     , {}        , 0    , "%1" }


};


