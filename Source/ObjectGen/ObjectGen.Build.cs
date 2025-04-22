using UnrealBuildTool;

public class ObjectGen: ModuleRules
{
    public ObjectGen(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
    }
}
