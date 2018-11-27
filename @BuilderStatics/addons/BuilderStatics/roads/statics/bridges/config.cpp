class CfgPatches
{
	class DZ_Structures_Industrial
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgNonAIVehicles
{	
	class StaticObject;
	class Static_bridge_metal_25: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\bridges\bridge_metal_25.p3d";
	};
	class Static_bridge_metal_25_1: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\bridges\bridge_metal_25_1.p3d";
	};
	class Static_bridge_stone_25: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\bridges\bridge_stone_25.p3d";
	};
	class Static_bridge_wood_25: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\bridges\bridge_wood_25.p3d";
	};
	class Static_bridge_wood_50: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\bridges\bridge_wood_50.p3d";
	};

};