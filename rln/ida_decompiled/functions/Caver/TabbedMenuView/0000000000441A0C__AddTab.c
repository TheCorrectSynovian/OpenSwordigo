/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441A0C
 * Mangled: _ZN5Caver14TabbedMenuView6AddTabERKSs
 * Demangled: Caver::TabbedMenuView::AddTab(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8270  Caver::TabbedMenuView::AddTab(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F7880  Caver::TabView::AddTab(std::string const&)
 *
 * Referenced strings: 7
 *   insn=0x0000000000441A18 string=0x0000000000441A1C "`"
 *   insn=0x0000000000441A20 string=0x0000000000441A24 "\n"
 *   insn=0x0000000000441A20 string=0x00000000001F7880 "0'"
 *   insn=0x0000000000441A24 string=0x0000000000441A28 "`"
 *   insn=0x0000000000441A24 string=0x0000000000583734 "o"
 *   insn=0x0000000000441A34 string=0x0000000000441A38 "h"
 *   insn=0x0000000000441A48 string=0x0000000000441A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabbedMenuView::AddTab(float *a1)
{
  __int64 result; // x0

  result = Caver::TabView::AddTab();
  if ( a1[35] > 0.001 )
    return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  return result;
}

