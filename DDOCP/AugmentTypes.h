// AugmentTypes.h
//
#pragma once

#include "XmlLib\SaxContentElement.h"

// Special note - The  "Unknown" entries of each enum must be entry 0 in the
// enum map as this is used by the SAX loaders to check for badly loaded values
// these enumerations are used across multiple object types
enum AugmentType
{
    Augment_Unknown = 0,
    // standard augment slots
    Augment_Blue,
    Augment_Green,
    Augment_Orange,
    Augment_Purple,
    Augment_Red,
    Augment_Yellow,
    Augment_Colorless,
    // special crafting augment slots
    // heroic green steel
    Augment_GreensteelItemTier1,
    Augment_GreensteelItemTier2,
    Augment_GreensteelItemTier3,
    Augment_GreensteelWeaponTier1,
    Augment_GreensteelWeaponTier2,
    Augment_GreensteelWeaponTier3,
    // epic green steel
    Augment_EpicGreensteelItemTier1,
    Augment_EpicGreensteelItemTier2,
    Augment_EpicGreensteelItemTier3,
    Augment_EpicGreensteelWeaponTier1,
    Augment_EpicGreensteelWeaponTier2,
    Augment_EpicGreensteelWeaponTier3,
    // heroic slave lords
    Augment_SlavelordsPrefix,
    Augment_SlavelordsSuffix,
    Augment_SlavelordsExtra,
    Augment_SlavelordsBonus,
    Augment_SlavelordsSetBonus,
    Augment_SlavelordsAugmentSlot,
    // epic slave lords
    Augment_LegendarySlavelordsPrefix,
    Augment_LegendarySlavelordsSuffix,
    Augment_LegendarySlavelordsExtra,
    Augment_LegendarySlavelordsBonus,
    Augment_LegendarySlavelordsSetBonus,
    Augment_LegendarySlavelordsAugmentSlot,
    // Cannith crafting
    Augment_ArmorPrefix,
    Augment_ArmorSuffix,
    Augment_ArmorExtra,
    Augment_BeltPrefix,
    Augment_BeltSuffix,
    Augment_BeltExtra,
    Augment_BootsPrefix,
    Augment_BootsSuffix,
    Augment_BootsExtra,
    Augment_BracersPrefix,
    Augment_BracersSuffix,
    Augment_BracersExtra,
    Augment_CloakPrefix,
    Augment_CloakSuffix,
    Augment_CloakExtra,
    Augment_GlovesPrefix,
    Augment_GlovesSuffix,
    Augment_GlovesExtra,
    Augment_GogglesPrefix,
    Augment_GogglesSuffix,
    Augment_GogglesExtra,
    Augment_HandwrapsPrefix,
    Augment_HandwrapsSuffix,
    Augment_HandwrapsExtra,
    Augment_HelmetPrefix,
    Augment_HelmetSuffix,
    Augment_HelmetExtra,
    Augment_NecklacePrefix,
    Augment_NecklaceSuffix,
    Augment_NecklaceExtra,
    Augment_MeleePrefix,
    Augment_MeleeSuffix,
    Augment_MeleeExtra,
    Augment_QuiverPrefix,
    Augment_QuiverSuffix,
    Augment_QuiverExtra,
    Augment_RangedPrefix,
    Augment_RangedSuffix,
    Augment_RangedExtra,
    Augment_RingPrefix,
    Augment_RingSuffix,
    Augment_RingExtra,
    Augment_RuneArmPrefix,
    Augment_RuneArmSuffix,
    Augment_RuneArmExtra,
    Augment_ShieldPrefix,
    Augment_ShieldSuffix,
    Augment_ShieldExtra,
    Augment_ThrownPrefix,
    Augment_ThrownSuffix,
    Augment_ThrownExtra,
    Augment_TrinketPrefix,
    Augment_TrinketSuffix,
    Augment_TrinketExtra,
    // specials
    Augment_Erudition,
    Augment_Prowess,
    Augment_Subterfuge,
    Augment_Avithoul,
    Augment_DunRobarPrefix,
    Augment_DunRobarSuffix,
    Augment_Szind,
    Augment_GoatskinOptional,
    Augment_SkullduggeryVariant,
    Augment_ShadesHood,
    Augment_BlackDragonHelmVariant,
    Augment_BlueDragonHelmVariant,
    Augment_WhiteDragonHelmVariant,
    Augment_PrisonersManacles,
    Augment_IntricateFieldOptics,
    Augment_PrismaticCloak,
    Augment_NecklaceVariant,
    Augment_RobeVariant,
    Augment_ShadowClothVariant,
    Augment_ShadowLightVariant,
    Augment_ShadowMediumVariant,
    Augment_ShadowHeavyVariant,
    Augment_ShadowDocentVariant,
};
const XmlLib::enumMapEntry<AugmentType> augmentTypeMap[] =
{
    {Augment_Unknown, L"Unknown"},
    {Augment_Blue, L"Blue"},
    {Augment_Green, L"Green"},
    {Augment_Orange, L"Orange"},
    {Augment_Purple, L"Purple"},
    {Augment_Red, L"Red"},
    {Augment_Yellow, L"Yellow"},
    {Augment_Colorless, L"Colorless"},
    {Augment_GreensteelItemTier1, L"GreensteelItemTier1"},
    {Augment_GreensteelItemTier2, L"GreensteelItemTier2"},
    {Augment_GreensteelItemTier3, L"GreensteelItemTier3"},
    {Augment_GreensteelWeaponTier1, L"GreensteelWeaponTier1"},
    {Augment_GreensteelWeaponTier2, L"GreensteelWeaponTier2"},
    {Augment_GreensteelWeaponTier3, L"GreensteelWeaponTier3"},
    {Augment_EpicGreensteelItemTier1, L"EpicGreensteelItemTier1"},
    {Augment_EpicGreensteelItemTier2, L"EpicGreensteelItemTier2"},
    {Augment_EpicGreensteelItemTier3, L"EpicGreensteelItemTier3"},
    {Augment_EpicGreensteelWeaponTier1, L"EpicGreensteelWeaponTier1"},
    {Augment_EpicGreensteelWeaponTier2, L"EpicGreensteelWeaponTier2"},
    {Augment_EpicGreensteelWeaponTier3, L"EpicGreensteelWeaponTier3"},
    {Augment_SlavelordsPrefix, L"Slavelords Prefix"},
    {Augment_SlavelordsSuffix, L"Slavelords Suffix"},
    {Augment_SlavelordsExtra, L"Slavelords Extra"},
    {Augment_SlavelordsBonus, L"Slavelords Bonus"},
    {Augment_SlavelordsSetBonus, L"Slavelords Set Bonus"},
    {Augment_SlavelordsAugmentSlot, L"Slavelords Augment Slot"},

    {Augment_LegendarySlavelordsPrefix, L"Legendary Slavelords Prefix"},
    {Augment_LegendarySlavelordsSuffix, L"Legendary Slavelords Suffix"},
    {Augment_LegendarySlavelordsExtra, L"Legendary Slavelords Extra"},
    {Augment_LegendarySlavelordsBonus, L"Legendary Slavelords Bonus"},
    {Augment_LegendarySlavelordsSetBonus, L"Legendary Slavelords Set Bonus"},
    {Augment_LegendarySlavelordsAugmentSlot, L"Legendary Slavelords Augment Slot"},

    {Augment_ArmorPrefix, L"Armor Prefix"},
    {Augment_ArmorSuffix, L"Armor Suffix"},
    {Augment_ArmorExtra, L"Armor Extra"},
    {Augment_BeltPrefix, L"Belt Prefix"},
    {Augment_BeltSuffix, L"Belt Suffix"},
    {Augment_BeltExtra, L"Belt Extra"},
    {Augment_BootsPrefix, L"Boots Prefix"},
    {Augment_BootsSuffix, L"Boots Suffix"},
    {Augment_BootsExtra, L"Boots Extra"},
    {Augment_BracersPrefix, L"Bracers Prefix"},
    {Augment_BracersSuffix, L"Bracers Suffix"},
    {Augment_BracersExtra, L"Bracers Extra"},
    {Augment_CloakPrefix, L"Cloak Prefix"},
    {Augment_CloakSuffix, L"Cloak Suffix"},
    {Augment_CloakExtra, L"Cloak Extra"},
    {Augment_GlovesPrefix, L"Gloves Prefix"},
    {Augment_GlovesSuffix, L"Gloves Suffix"},
    {Augment_GlovesExtra, L"Gloves Extra"},
    {Augment_GogglesPrefix, L"Goggles Prefix"},
    {Augment_GogglesSuffix, L"Goggles Suffix"},
    {Augment_GogglesExtra, L"Goggles Extra"},
    {Augment_HandwrapsPrefix, L"Handwraps Prefix"},
    {Augment_HandwrapsSuffix, L"Handwraps Suffix"},
    {Augment_HandwrapsExtra, L"handwraps Extra"},
    {Augment_HelmetPrefix, L"Helmet Prefix"},
    {Augment_HelmetSuffix, L"Helmet Suffix"},
    {Augment_HelmetExtra, L"Helmet Extra"},
    {Augment_NecklacePrefix, L"Necklace Prefix"},
    {Augment_NecklaceSuffix, L"Necklace Suffix"},
    {Augment_NecklaceExtra, L"Necklace Extra"},
    {Augment_MeleePrefix, L"Melee Prefix"},
    {Augment_MeleeSuffix, L"Melee Suffix"},
    {Augment_MeleeExtra, L"Melee Extra"},
    {Augment_QuiverPrefix, L"Quiver Prefix"},
    {Augment_QuiverSuffix, L"Quiver Suffix"},
    {Augment_QuiverExtra, L"Quiver Extra"},
    {Augment_RangedPrefix, L"Ranged Prefix"},
    {Augment_RangedSuffix, L"Ranged Suffix"},
    {Augment_RangedExtra, L"Ranged Extra"},
    {Augment_RingPrefix, L"Ring Prefix"},
    {Augment_RingSuffix, L"Ring Suffix"},
    {Augment_RingExtra, L"Ring Extra"},
    {Augment_RuneArmPrefix, L"Rune-Arm Prefix"},
    {Augment_RuneArmSuffix, L"Rune-Arm Suffix"},
    {Augment_RuneArmExtra, L"Rune-Arm Extra"},
    {Augment_ShieldPrefix, L"Shield Prefix"},
    {Augment_ShieldSuffix, L"Shield Suffix"},
    {Augment_ShieldExtra, L"Shield Extra"},
    {Augment_ThrownPrefix, L"Thrown Prefix"},
    {Augment_ThrownSuffix, L"Thrown Suffix"},
    {Augment_ThrownExtra, L"Thrown Extra"},
    {Augment_TrinketPrefix, L"Trinket Prefix"},
    {Augment_TrinketSuffix, L"Trinket Suffix"},
    {Augment_TrinketExtra, L"Trinket Extra"},

    {Augment_Erudition, L"Erudition"},
    {Augment_Prowess, L"Prowess"},
    {Augment_Subterfuge, L"Subterfuge"},
    {Augment_Avithoul, L"Avithoul"},
    {Augment_DunRobarPrefix, L"Dun'Robar Prefix"},
    {Augment_DunRobarSuffix,L"Dun'Robar Suffix"},
    {Augment_Szind, L"Szind"},
    {Augment_GoatskinOptional, L"Goatskin Optional"},
    {Augment_SkullduggeryVariant, L"Skullduggery Variant"},
    {Augment_ShadesHood, L"ShadesHood"},
    {Augment_BlackDragonHelmVariant, L"Black Dragon Helm Variant"},
    {Augment_BlueDragonHelmVariant, L"Blue Dragon Helm Variant"},
    {Augment_WhiteDragonHelmVariant, L"White Dragon Helm Variant"},
    {Augment_PrisonersManacles, L"Manacles Variant"},
    {Augment_IntricateFieldOptics, L"Field Optics Variant"},
    {Augment_PrismaticCloak, L"Cloak Variant"},
    {Augment_NecklaceVariant, L"Necklace Variant"},
    {Augment_RobeVariant, L"Robe Variant"},
    {Augment_ShadowClothVariant, L"Shadow Cloth Variant"},
    {Augment_ShadowLightVariant, L"Shadow Light Variant"},
    {Augment_ShadowMediumVariant, L"Shadow Medium Variant"},
    {Augment_ShadowHeavyVariant, L"Shadow Heavy Variant"},
    {Augment_ShadowDocentVariant, L"Shadow Docent Variant"},
    {AugmentType(0), NULL}
};
