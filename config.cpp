class CfgPatches
{
	class Admin_LEHS
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Characters","ns_dayz_gear_lehs"};
		author = "AndiTheBambi";
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Clothing;
	
	class dzn_lehs_battery: Inventory_Base{};
	class Admin_LEHS_Battery: dzn_lehs_battery
	{
		displayName = "Admin LEHS Battery";
		descriptionShort = "Admin LEHS Battery";
		weight = 0.0002;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 9999.0;
		varQuantityMin = 0.0;
		varQuantityMax = 9999.0;
		varQuantityDestroyOnMin = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	};
	
	class dzn_lehs_o2tank: Inventory_Base{};
	class Admin_LEHS_O2Tank: dzn_lehs_o2tank
	{
		displayName = "Admin LEHS O2 Tank";
		descriptionShort = "Admin LEHS O2 Tank";
		itemSize[] = {1,2};
		weight = 0.0002;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 9999.0;
		varQuantityMin = 0.0;
		varQuantityMax = 9999.0;
		varQuantityDestroyOnMin = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	}
	
	class dzn_lehs: Clothing{};
	class Admin_LEHS: dzn_lehs
	{
		displayName = "Admin LEHS Suit";
		descriptionShort = "Admin LEHS Suit";
		attachments[] = {"LEHS_Firearm","Shoulder","Melee","LEHS_Battery","LEHS_O2Tank","WalkieTalkie","Back"};
		itemSize[] = {1,1};
		itemsCargoSize[] = {10,100};
		quickBarBonus = 10;
		weight = 0.0428;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	}
	
	class dzn_lehs_helmet: Clothing{};
	class Admin_LEHS_Helmet: dzn_lehs_helmet
	{
		displayName = "Admin LEHS Helmet";
		descriptionShort = "Admin LEHS Helmet";
		itemSize[] = {1,1};
		weight = 0.0428;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	}
};
