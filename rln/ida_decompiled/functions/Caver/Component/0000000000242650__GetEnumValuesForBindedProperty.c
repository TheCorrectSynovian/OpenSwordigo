/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242650
 * Mangled: _ZN5Caver9Component30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x00000000001F5090  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 18
 *   insn=0x000000000024266C string=0x0000000000242670 "*"
 *   insn=0x0000000000242670 string=0x0000000000242674 "K!@"
 *   insn=0x0000000000242670 string=0x0000000000242694 "?"
 *   insn=0x0000000000242674 string=0x0000000000242678 "La"
 *   insn=0x0000000000242678 string=0x000000000024267C "MA"
 *   insn=0x0000000000242684 string=0x0000000000242688 ")"
 *   insn=0x0000000000242688 string=0x000000000024268C "j"
 *   insn=0x000000000024268C string=0x0000000000242690 "*"
 *   insn=0x0000000000242698 string=0x000000000024269C "*!@"
 *   insn=0x000000000024269C string=0x00000000002426A0 "_"
 *   insn=0x00000000002426A0 string=0x00000000002426A4 "\t"
 *   insn=0x00000000002426A4 string=0x00000000002426A8 "?"
 *   insn=0x00000000002426A8 string=0x00000000002426AC "`"
 *   insn=0x00000000002426AC string=0x00000000002426B0 " "
 *   insn=0x00000000002426B0 string=0x00000000002426B4 ""
 *   insn=0x00000000002426B4 string=0x00000000002426B8 ""
 *   insn=0x00000000002426D0 string=0x00000000002426D4 "o"
 *   insn=0x00000000002426D4 string=0x00000000001F5090 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::GetEnumValuesForBindedProperty(__int64 result, int a2)
{
  __int64 v2; // x10
  __int64 v3; // x8
  __int64 v4; // x9
  int v5; // w11
  bool v6; // cc
  __int64 *v7; // x11

  v2 = *(_QWORD *)(result + 80);
  v3 = result + 72;
  v4 = result + 72;
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
      v4 = result + 72;
    if ( v4 != v3 )
    {
      (***(void (__fastcall ****)(_QWORD))(v4 + 56))(*(_QWORD *)(v4 + 56));
      return Caver::Component::GetEnumValuesForBindedOutlet();
    }
  }
  return result;
}

