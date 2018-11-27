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
	class Static_panel_concrete_1: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\panel_concrete_1.p3d";
	};
	class Static_panel_concrete_2: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\panel_concrete_2.p3d";
	};
	class Static_panel_concrete_dam: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\panel_concrete_dam.p3d";
	};
	class Static_panels_concrete: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\panels_concrete.p3d";
	};
	class Static_path_panels: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\path_panels.p3d";
	};
	class Static_path_panels_damaged: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\path_panels_damaged.p3d";
	};
	class Static_concrete_panel_2_grass: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panel_2_grass.p3d";
	};
	class Static_concrete_panel_dam_grass: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panel_dam_grass.p3d";
	};
	class Static_concrete_panel_grass: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panel_grass.p3d";
	};
	class Static_concrete_panels_main_grass: StaticObject
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panels_main_grass.p3d";
	};


};