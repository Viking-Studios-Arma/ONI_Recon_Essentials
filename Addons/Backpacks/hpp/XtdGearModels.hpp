class XtdGearModels 
{
    class CfgVehicles 
    {
        class ONI_Recon_Backpack
        {
            label = "[ONI] Bacpacks";
            author = "Viking Studios";
            options[] = {"variant"};

            class variant 
            {
                changeingame = 0;
                values[] = {"rifleman","medic","IC","IC_I"};
                class rifleman { label = "Rifleman"; };
                class medic { label = "Medic"; };
                class IC { label = "IC"; };
                class IC_I { label = "IC (Invisible)"; };
            };
        };
    };
};