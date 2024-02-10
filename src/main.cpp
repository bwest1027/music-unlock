#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/GameStatsManager.hpp>

using namespace geode::prelude;

//Practice Music Unlock
class $modify(GameStatsManager) {
	bool isItemUnlocked(UnlockType p0, int p1) {
		if (p0 != UnlockType::GJItem && p1 != 17) return GameStatsManager::isItemUnlocked(p0,p1);
			return true;
	}
};

//----------------------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------------------//

//Music Customizer Unlock
class $modify(GameStatsManager) {
	bool isItemUnlocked(UnlockType p0, int p1) {
		if (p0 != UnlockType::GJItem && p1 != 19) return GameStatsManager::isItemUnlocked(p0,p1);
			return true;
	}
};