/*
* Copyright (C) 2005-2008 MaNGOS <http://getmangos.com/>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef DBCENUMS_H
#define DBCENUMS_H

enum AreaTeams
{
    AREATEAM_NONE  = 0,
    AREATEAM_ALLY  = 2,
    AREATEAM_HORDE = 4
};

enum AchievementFactionFlags
{
    ACHIEVEMENT_FACTION_FLAG_HORDE    = 0x00000000,
    ACHIEVEMENT_FACTION_FLAG_ALLIANCE = 0x00000001,
};

enum AchievementFlags
{
    ACHIEVEMENT_FLAG_COUNTER          = 0x00000001,
    ACHIEVEMENT_FLAG_REACH_LEVEL      = 0x00000004,
    ACHIEVEMENT_FLAG_RERERED_MAX      = 0x00000010,         // displays the maximum criteria of a refered achievement
    ACHIEVEMENT_FLAG_AVERAGE          = 0x00000040,
    ACHIEVEMENT_FLAG_REALM_FIRST_REACH= 0x00000100,
    ACHIEVEMENT_FLAG_REALM_FIRST_KILL = 0x00000200,
};

enum AchievementCriteriaCondition
{
    ACHIEVEMENT_CRITERIA_CONDITION_NONE      = 0,
    ACHIEVEMENT_CRITERIA_CONDITION_NO_DEATH  = 1,
    ACHIEVEMENT_CRITERIA_CONDITION_UNK1      = 2,           // only used in "Complete a daily quest every day for five consecutive days"
    ACHIEVEMENT_CRITERIA_CONDITION_MAP       = 3,           // requires you to be on specific map
    ACHIEVEMENT_CRITERIA_CONDITION_NO_LOOSE  = 4,           // only used in "Win 10 arenas without losing"
    ACHIEVEMENT_CRITERIA_CONDITION_UNK2      = 9,           // unk
    ACHIEVEMENT_CRITERIA_CONDITION_UNK3      = 13,          // unk
};

enum AchievementCriteriaCompletionFlags
{
    // some Achievements (like 698) have several criteria but only one has to be fulfilled. These are identified by this flag.
    ACHIEVEMENT_CRITERIA_COMPLETE_FLAG_ALL = 2,
};

enum AchievementCriteriaGroupFlags
{
    // you mustn't be in a group while fulfilling this achievement
    ACHIEVEMENT_CRITERIA_GROUP_NOT_IN_GROUP = 2,
};

enum AchievementCriteriaTypes
{
    ACHIEVEMENT_CRITERIA_TYPE_KILL_CREATURE = 0,
    ACHIEVEMENT_CRITERIA_TYPE_WIN_BG = 1,
    ACHIEVEMENT_CRITERIA_TYPE_REACH_LEVEL = 5,
    ACHIEVEMENT_CRITERIA_TYPE_REACH_SKILL_LEVEL = 7,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_ACHIEVEMENT = 8,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_QUEST_COUNT = 9,
    // you have to complete a daily quest x times in a row
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_DAILY_QUEST_DAILY = 10,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_QUESTS_IN_ZONE = 11,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_DAILY_QUEST = 14,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_BATTLEGROUND= 15,
    ACHIEVEMENT_CRITERIA_TYPE_DEATH_AT_MAP= 16,
    // TODO: this can be both arena and total deaths. Where is this difference in the dbc?
    ACHIEVEMENT_CRITERIA_TYPE_DEATH= 17,
    ACHIEVEMENT_CRITERIA_TYPE_DEATH_IN_DUNGEON = 18,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_RAID = 19,
    ACHIEVEMENT_CRITERIA_TYPE_KILLED_BY_CREATURE = 20,
    ACHIEVEMENT_CRITERIA_TYPE_KILLED_BY_PLAYER = 23,
    ACHIEVEMENT_CRITERIA_TYPE_FALL_WITHOUT_DYING = 24,
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_QUEST = 27,
    ACHIEVEMENT_CRITERIA_TYPE_BE_SPELL_TARGET = 28,
    ACHIEVEMENT_CRITERIA_TYPE_CAST_SPELL= 29,
    ACHIEVEMENT_CRITERIA_TYPE_BG_OBJECTIVE_CAPTURE = 30,
    ACHIEVEMENT_CRITERIA_TYPE_HONORABLE_KILL_AT_AREA = 31,
    ACHIEVEMENT_CRITERIA_TYPE_WIN_ARENA = 32,
    ACHIEVEMENT_CRITERIA_TYPE_PLAY_ARENA = 33,
    ACHIEVEMENT_CRITERIA_TYPE_LEARN_SPELL = 34,
    // TODO: this criteria has additional conditions which can not be found in the dbcs
    ACHIEVEMENT_CRITERIA_TYPE_HONORABLE_KILL = 35,
    ACHIEVEMENT_CRITERIA_TYPE_OWN_ITEM = 36,
    // TODO: the archievements 1162 and 1163 requires a special rating which can't be found in the dbc
    ACHIEVEMENT_CRITERIA_TYPE_WIN_RATED_ARENA = 37,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_TEAM_RATING = 38,
    ACHIEVEMENT_CRITERIA_TYPE_REACH_TEAM_RATING = 39,
    ACHIEVEMENT_CRITERIA_TYPE_LEARN_SKILL_LEVEL = 40,
    ACHIEVEMENT_CRITERIA_TYPE_USE_ITEM = 41,
    ACHIEVEMENT_CRITERIA_TYPE_LOOT_ITEM= 42,
    ACHIEVEMENT_CRITERIA_TYPE_EXPLORE_AREA = 43,
    ACHIEVEMENT_CRITERIA_TYPE_OWN_RANK= 44,
    ACHIEVEMENT_CRITERIA_TYPE_BUY_BANK_SLOT= 45,
    ACHIEVEMENT_CRITERIA_TYPE_GAIN_REPUTATION= 46,
    ACHIEVEMENT_CRITERIA_TYPE_GAIN_EXALTED_REPUTATION= 47,
    // noted: rewarded as soon as the player payed, not at taking place at the seat
    ACHIEVEMENT_CRITERIA_TYPE_VISIT_BARBER_SHOP= 48,
    ACHIEVEMENT_CRITERIA_TYPE_EQUIP_EPIC_ITEM = 49,
    // TODO: itemlevel is mentioned in text but not present in dbc
    ACHIEVEMENT_CRITERIA_TYPE_ROLL_NEED_ON_LOOT = 50,
    ACHIEVEMENT_CRITERIA_TYPE_HK_CLASS = 52,
    ACHIEVEMENT_CRITERIA_TYPE_HK_RACE = 53,
    ACHIEVEMENT_CRITERIA_TYPE_DO_EMOTE = 54,
    ACHIEVEMENT_CRITERIA_TYPE_HEALING_DONE = 55,
    ACHIEVEMENT_CRITERIA_TYPE_EQUIP_ITEM = 57,
    ACHIEVEMENT_CRITERIA_TYPE_GOLD_SPENT_FOR_TALENTS = 60,
    ACHIEVEMENT_CRITERIA_TYPE_NUMBER_OF_TALENT_RESETS = 61,
    ACHIEVEMENT_CRITERIA_TYPE_GOLD_SPENT_FOR_TRAVELLING = 63,
    ACHIEVEMENT_CRITERIA_TYPE_GOLD_SPENT_AT_BARBER = 65,
    ACHIEVEMENT_CRITERIA_TYPE_GOLD_SPENT_FOR_MAIL = 66,
    ACHIEVEMENT_CRITERIA_TYPE_LOOT_MONEY = 67,
    ACHIEVEMENT_CRITERIA_TYPE_USE_GAMEOBJECT = 68,
    ACHIEVEMENT_CRITERIA_TYPE_BE_SPELL_TARGET2= 69,
    ACHIEVEMENT_CRITERIA_TYPE_SPECIAL_PVP_KILL= 70,
    ACHIEVEMENT_CRITERIA_TYPE_FISH_IN_GAMEOBJECT = 72,
    // TODO: title id is not mentioned in dbc
    ACHIEVEMENT_CRITERIA_TYPE_EARNED_PVP_TITLE = 74,
    ACHIEVEMENT_CRITERIA_TYPE_LEARN_SKILLLINE_SPELLS= 75,
    ACHIEVEMENT_CRITERIA_TYPE_WIN_DUEL = 76,
    ACHIEVEMENT_CRITERIA_TYPE_LOSE_DUEL = 77,
    // TODO: creature type (demon, undead etc.) is not stored in dbc
    ACHIEVEMENT_CRITERIA_TYPE_KILL_CREATURE_TYPE = 78,
    ACHIEVEMENT_CRITERIA_TYPE_GOLD_EARNED_BY_AUCTIONS= 80,
    ACHIEVEMENT_CRITERIA_TYPE_CREATE_AUCTION= 82,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_AUCTION_BID= 83,
    ACHIEVEMENT_CRITERIA_TYPE_WON_AUCTIONS= 84,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_AUCTION_SOLD = 85,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_GOLD_VALUE_OWNED = 86,
    ACHIEVEMENT_CRITERIA_TYPE_GAIN_REVERED_REPUTATION = 87,
    ACHIEVEMENT_CRITERIA_TYPE_GAIN_HONORED_REPUTATION = 88,
    ACHIEVEMENT_CRITERIA_TYPE_KNOWN_FACTIONS = 89,
    ACHIEVEMENT_CRITERIA_TYPE_LOOT_EPIC_ITEM = 90,
    ACHIEVEMENT_CRITERIA_TYPE_RECEIVE_EPIC_ITEM = 91,
    ACHIEVEMENT_CRITERIA_TYPE_ROLL_NEED = 93,
    ACHIEVEMENT_CRITERIA_TYPE_ROLL_GREED = 94,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_HEALTH = 95,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_POWER = 96,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_STAT = 97,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_SPELLPOWER = 98,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_ARMOR = 99,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_RATING = 100,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_HIT_DEALT = 101,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_HIT_RECEIVED = 102,
    ACHIEVEMENT_CRITERIA_TYPE_TOTAL_DAMAGE_RECEIVED = 103,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_HEAL_CASTED = 104,
    ACHIEVEMENT_CRITERIA_TYPE_TOTAL_HEALING_RECEIVED = 105,
    ACHIEVEMENT_CRITERIA_TYPE_HIGHEST_HEALING_RECEIVED = 106,
    ACHIEVEMENT_CRITERIA_TYPE_QUEST_ABANDONED = 107,
    ACHIEVEMENT_CRITERIA_TYPE_FLIGHT_PATHS_TAKEN = 108,
    ACHIEVEMENT_CRITERIA_TYPE_LOOT_TYPE = 109,
    // TODO: target entry is missing
    ACHIEVEMENT_CRITERIA_TYPE_CAST_SPELL2 = 110,
    ACHIEVEMENT_CRITERIA_TYPE_LEARN_SKILL_LINE= 112,
    ACHIEVEMENT_CRITERIA_TYPE_EARN_HONORABLE_KILL = 113,
    ACHIEVEMENT_CRITERIA_TYPE_ACCEPTED_SUMMONINGS = 114,
    // 0..114 => 115 criteria types total
    ACHIEVEMENT_CRITERIA_TYPE_TOTAL = 115,
};

enum AreaFlags
{
    AREA_FLAG_SNOW             = 0x00000001,                // snow (only Dun Morogh, Naxxramas, Razorfen Downs and Winterspring)
    AREA_FLAG_UNK1             = 0x00000002,                // unknown, (only Naxxramas and Razorfen Downs)
    AREA_FLAG_UNK2             = 0x00000004,                // Only used on development map
    AREA_FLAG_SLAVE_CAPITAL    = 0x00000008,                // slave capital city flag?
    AREA_FLAG_UNK3             = 0x00000010,                // unknown
    AREA_FLAG_SLAVE_CAPITAL2   = 0x00000020,                // slave capital city flag?
    AREA_FLAG_UNK4             = 0x00000040,                // many zones have this flag
    AREA_FLAG_ARENA            = 0x00000080,                // arena, both instanced and world arenas
    AREA_FLAG_CAPITAL          = 0x00000100,                // main capital city flag
    AREA_FLAG_CITY             = 0x00000200,                // only for one zone named "City" (where it located?)
    AREA_FLAG_OUTLAND          = 0x00000400,                // outland zones? (only Eye of the Storm not have this flag, but have 0x00004000 flag)
    AREA_FLAG_SANCTUARY        = 0x00000800,                // sanctuary area (PvP disabled)
    AREA_FLAG_NEED_FLY         = 0x00001000,                // only Netherwing Ledge, Socrethar's Seat, Tempest Keep, The Arcatraz, The Botanica, The Mechanar, Sorrow Wing Point, Dragonspine Ridge, Netherwing Mines, Dragonmaw Base Camp, Dragonmaw Skyway
    AREA_FLAG_UNUSED1          = 0x00002000,                // not used now (no area/zones with this flag set in 2.4.2)
    AREA_FLAG_OUTLAND2         = 0x00004000,                // outland zones? (only Circle of Blood Arena not have this flag, but have 0x00000400 flag)
    AREA_FLAG_PVP              = 0x00008000,                // pvp objective area? (Death's Door also has this flag although it's no pvp object area)
    AREA_FLAG_ARENA_INSTANCE   = 0x00010000,                // used by instanced arenas only
    AREA_FLAG_UNUSED2          = 0x00020000,                // not used now (no area/zones with this flag set in 2.4.2)
    AREA_FLAG_UNK5             = 0x00040000,                // just used for Amani Pass, Hatchet Hills
    AREA_FLAG_LOWLEVEL         = 0x00100000                 // used for some starting areas with area_level <=15
};

enum FactionTemplateFlags
{
    FACTION_TEMPLATE_FLAG_CONTESTED_GUARD   =   0x00001000, // faction will attack players that were involved in PvP combats
};

enum FactionMasks
{
    FACTION_MASK_PLAYER   = 1,                              // any player
    FACTION_MASK_ALLIANCE = 2,                              // player or creature from alliance team
    FACTION_MASK_HORDE    = 4,                              // player or creature from horde team
    FACTION_MASK_MONSTER  = 8                               // aggressive creature from monster team
    // if none flags set then non-aggressive creature
};

enum MapTypes
{
    MAP_COMMON          = 0,
    MAP_INSTANCE        = 1,
    MAP_RAID            = 2,
    MAP_BATTLEGROUND    = 3,
    MAP_ARENA           = 4
};

enum AbilytyLearnType
{
    ABILITY_LEARNED_ON_GET_PROFESSION_SKILL     = 1,
    ABILITY_LEARNED_ON_GET_RACE_OR_CLASS_SKILL  = 2
};

enum ItemEnchantmentType
{
    ITEM_ENCHANTMENT_TYPE_NONE         = 0,
    ITEM_ENCHANTMENT_TYPE_COMBAT_SPELL = 1,
    ITEM_ENCHANTMENT_TYPE_DAMAGE       = 2,
    ITEM_ENCHANTMENT_TYPE_EQUIP_SPELL  = 3,
    ITEM_ENCHANTMENT_TYPE_RESISTANCE   = 4,
    ITEM_ENCHANTMENT_TYPE_STAT         = 5,
    ITEM_ENCHANTMENT_TYPE_TOTEM        = 6
};

enum TotemCategoryType
{
    TOTEM_CATEGORY_TYPE_KNIFE   = 1,
    TOTEM_CATEGORY_TYPE_TOTEM   = 2,
    TOTEM_CATEGORY_TYPE_ROD     = 3,
    TOTEM_CATEGORY_TYPE_PICK    = 21,
    TOTEM_CATEGORY_TYPE_STONE   = 22,
    TOTEM_CATEGORY_TYPE_HAMMER  = 23,
    TOTEM_CATEGORY_TYPE_SPANNER = 24
};

#endif
