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
class CfgVehicles
{	
	class HouseNoDestruct;
	class bldr_panel_concrete_1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\panel_concrete_1.p3d";
	};
	class bldr_panel_concrete_2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\panel_concrete_2.p3d";
	};
	class bldr_panel_concrete_dam: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\panel_concrete_dam.p3d";
	};
	class bldr_panels_concrete: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\panels_concrete.p3d";
	};
	class bldr_path_panels: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\path_panels.p3d";
	};
	class bldr_path_panels_damaged: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\path_panels_damaged.p3d";
	};
	class bldr_concrete_panel_2_grass: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panel_2_grass.p3d";
	};
	class bldr_concrete_panel_dam_grass: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panel_dam_grass.p3d";
	};
	class bldr_concrete_panel_grass: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panel_grass.p3d";
	};
	class bldr_concrete_panels_main_grass: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\roads\panels\proxy\concrete_panels_main_grass.p3d";
	};


};