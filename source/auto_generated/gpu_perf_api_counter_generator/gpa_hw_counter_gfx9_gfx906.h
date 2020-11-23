//==============================================================================
// Copyright (c) 2010-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Hardware counter info for GFX9_GFX906
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_HW_COUNTER_GFX9_GFX906_H_
#define _GPA_HW_COUNTER_GFX9_GFX906_H_

// clang-format off

#include <set>

struct GPA_HardwareCounterDesc;
#include "gpa_hw_counter_gfx9.h"

namespace counter_gfx9_gfx906
{
/// Uses the input ASIC type to determine if this data provides an ASIC specific version.
/// \param asic_type The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asic_type)
{
    static std::set<GDT_HW_ASIC_TYPE> asics_supported = { GDT_GFX9_0_6 };

    if (asics_supported.find(asic_type) == asics_supported.end())
    {
        return false;
    }

    return true;
}

    extern GPA_HardwareCounterDesc pa_su0_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_su0 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_su1_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_su1 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_su2_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_su2 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_su3_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_su3 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_sc0_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_sc0 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_sc1_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_sc1 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_sc2_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_sc2 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc pa_sc3_counters_gfx9_gfx906[]; ///< Array of internal counters for pa_sc3 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc0_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc0 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc1_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc1 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc2_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc2 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc3_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc3 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc4_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc4 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc5_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc5 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc6_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc6 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc7_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc7 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc8_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc8 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc9_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc9 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc10_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc10 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc11_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc11 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc12_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc12 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc13_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc13 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc14_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc14 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc tcc15_counters_gfx9_gfx906[]; ///< Array of internal counters for tcc15 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc ia0_counters_gfx9_gfx906[]; ///< Array of internal counters for ia0 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc ia1_counters_gfx9_gfx906[]; ///< Array of internal counters for ia1 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc rpb_counters_gfx9_gfx906[]; ///< Array of internal counters for rpb block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea0_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea0 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea1_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea1 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea2_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea2 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea3_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea3 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea4_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea4 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea5_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea5 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea6_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea6 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea7_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea7 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea8_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea8 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea9_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea9 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea10_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea10 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea11_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea11 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea12_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea12 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea13_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea13 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea14_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea14 block for gfx9_gfx906 family
    extern GPA_HardwareCounterDesc gcea15_counters_gfx9_gfx906[]; ///< Array of internal counters for gcea15 block for gfx9_gfx906 family

/// Replaces count number of block instance counters at the destination with the overriding source counters.
/// \param dest_counter Destination to update.
/// \param src_counter Source to update from.
/// \param count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GPA_HardwareCounterDesc* dest_counter, GPA_HardwareCounterDesc* src_counter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        dest_counter[i] = src_counter[i];
    }
}

/// If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
/// \param asic_type The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asic_type)
{
    if (!MatchAsic(asic_type))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(counter_gfx9::pa_su0_counters_gfx9, pa_su0_counters_gfx9_gfx906, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_su1_counters_gfx9, pa_su1_counters_gfx9_gfx906, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_su2_counters_gfx9, pa_su2_counters_gfx9_gfx906, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_su3_counters_gfx9, pa_su3_counters_gfx9_gfx906, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_sc0_counters_gfx9, pa_sc0_counters_gfx9_gfx906, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_sc1_counters_gfx9, pa_sc1_counters_gfx9_gfx906, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_sc2_counters_gfx9, pa_sc2_counters_gfx9_gfx906, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::pa_sc3_counters_gfx9, pa_sc3_counters_gfx9_gfx906, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc0_counters_gfx9, tcc0_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc1_counters_gfx9, tcc1_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc2_counters_gfx9, tcc2_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc3_counters_gfx9, tcc3_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc4_counters_gfx9, tcc4_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc5_counters_gfx9, tcc5_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc6_counters_gfx9, tcc6_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc7_counters_gfx9, tcc7_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc8_counters_gfx9, tcc8_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc9_counters_gfx9, tcc9_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc10_counters_gfx9, tcc10_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc11_counters_gfx9, tcc11_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc12_counters_gfx9, tcc12_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc13_counters_gfx9, tcc13_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc14_counters_gfx9, tcc14_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::tcc15_counters_gfx9, tcc15_counters_gfx9_gfx906, 282);
    ReplaceBlockInstanceCounters(counter_gfx9::ia0_counters_gfx9, ia0_counters_gfx9_gfx906, 31);
    ReplaceBlockInstanceCounters(counter_gfx9::ia1_counters_gfx9, ia1_counters_gfx9_gfx906, 31);
    ReplaceBlockInstanceCounters(counter_gfx9::rpb_counters_gfx9, rpb_counters_gfx9_gfx906, 95);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea0_counters_gfx9, gcea0_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea1_counters_gfx9, gcea1_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea2_counters_gfx9, gcea2_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea3_counters_gfx9, gcea3_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea4_counters_gfx9, gcea4_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea5_counters_gfx9, gcea5_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea6_counters_gfx9, gcea6_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea7_counters_gfx9, gcea7_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea8_counters_gfx9, gcea8_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea9_counters_gfx9, gcea9_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea10_counters_gfx9, gcea10_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea11_counters_gfx9, gcea11_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea12_counters_gfx9, gcea12_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea13_counters_gfx9, gcea13_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea14_counters_gfx9, gcea14_counters_gfx9_gfx906, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::gcea15_counters_gfx9, gcea15_counters_gfx9_gfx906, 83);

    return true;
}

bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type);
} // counter_gfx9_gfx906

#endif  // _GPA_HW_COUNTER_GFX9_GFX906_H_

// clang-format on