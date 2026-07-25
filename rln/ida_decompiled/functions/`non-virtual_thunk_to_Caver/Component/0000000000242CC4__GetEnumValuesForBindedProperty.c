/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242CC4
 * Mangled: _ZThn16_N5Caver9Component30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000002426E4  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x00000000001F5090  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 20
 *   insn=0x0000000000242CCC string=0x0000000000242CD0 "\n @"
 *   insn=0x0000000000242CD0 string=0x0000000000242CD4 ""
 *   insn=0x0000000000242CDC string=0x0000000000242CE0 "*"
 *   insn=0x0000000000242CE0 string=0x0000000000242CE4 "K!@"
 *   insn=0x0000000000242CE0 string=0x0000000000242D04 "?"
 *   insn=0x0000000000242CE4 string=0x0000000000242CE8 "La"
 *   insn=0x0000000000242CE8 string=0x0000000000242CEC "MA"
 *   insn=0x0000000000242CF4 string=0x0000000000242CF8 ")"
 *   insn=0x0000000000242CF8 string=0x0000000000242CFC "j"
 *   insn=0x0000000000242CFC string=0x0000000000242D00 "*"
 *   insn=0x0000000000242D04 string=0x0000000000242D08 "@"
 *   insn=0x0000000000242D08 string=0x0000000000242D0C "*!@"
 *   insn=0x0000000000242D0C string=0x0000000000242D10 "_"
 *   insn=0x0000000000242D10 string=0x0000000000242D14 "\t"
 *   insn=0x0000000000242D14 string=0x0000000000242D18 "?"
 *   insn=0x0000000000242D1C string=0x0000000000242D20 "("
 *   insn=0x0000000000242D24 string=0x0000000000242D28 "\t"
 *   insn=0x0000000000242D2C string=0x0000000000242D30 ")"
 *   insn=0x0000000000242D30 string=0x0000000000242D34 " "
 *   insn=0x0000000000242D4C string=0x00000000001F5090 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::Component::GetEnumValuesForBindedProperty(__int64 result, int a2)
{
  __int64 v2; // x10
  __int64 v3; // x8
  __int64 v4; // x9
  int v5; // w11
  bool v6; // cc
  __int64 *v7; // x11

  v2 = *(_QWORD *)(result + 64);
  v3 = result + 56;
  v4 = result + 56;
  if ( v2 )
  {
    do
    {
      v5 = *(_DWORD *)(v2 + 32);
      v6 = v5 < a2;
      if ( v5 >= a2 )
        v7 = (__int64 *)(v2 + 16);
      else
        v7 = (__int64 *)(v2 + 24);
      if ( !v6 )
        v4 = v2;
      v2 = *v7;
    }
    while ( *v7 );
  }
  if ( v4 != v3 )
  {
    if ( *(_DWORD *)(v4 + 32) > a2 )
      v4 = result + 56;
    if ( v4 != v3 )
    {
      (***(void (__fastcall ****)(_QWORD *__return_ptr, _QWORD))(v4 + 56))(*(_QWORD **)(v4 + 56), *(_QWORD *)(v4 + 56));
      return Caver::Component::GetEnumValuesForBindedOutlet();
    }
  }
  return result;
}

