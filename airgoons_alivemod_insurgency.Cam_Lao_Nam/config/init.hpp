// Arsenal Configuration
#include "arsenal.hpp"
// TFAR Configuration
#include "tfar.hpp"
// Wheel Menu Actions
#include "wheel_menu_actions.hpp"

// enable autosave
10800 call ALiVE_fnc_AutoSave_PNS;  // every 3 hours

// load profile namespace variables for runtime use
__EXEC(allProfileNamespaceVars = allVariables profileNamespace);
