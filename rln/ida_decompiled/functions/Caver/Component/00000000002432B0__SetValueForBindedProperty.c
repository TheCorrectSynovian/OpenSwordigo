/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002432B0
 * Mangled: _ZN5Caver9Component25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000002432B0 string=0x00000000002432B4 " "
 *   insn=0x00000000002432B8 string=0x00000000002432BC "*"
 *   insn=0x00000000002432BC string=0x00000000002432C0 "K!@"
 *   insn=0x00000000002432BC string=0x00000000002432E0 "?"
 *   insn=0x00000000002432C0 string=0x00000000002432C4 "La"
 *   insn=0x00000000002432C4 string=0x00000000002432C8 "MA"
 *   insn=0x00000000002432D0 string=0x00000000002432D4 ")"
 *   insn=0x00000000002432D4 string=0x00000000002432D8 "j"
 *   insn=0x00000000002432D8 string=0x00000000002432DC "*"
 *   insn=0x00000000002432E4 string=0x00000000002432E8 "*!@"
 *   insn=0x00000000002432E8 string=0x00000000002432EC "_"
 *   insn=0x00000000002432EC string=0x00000000002432F0 "\t"
 *   insn=0x00000000002432F0 string=0x00000000002432F4 "?"
 *   insn=0x00000000002432F8 string=0x00000000002432FC " "
 *   insn=0x00000000002432FC string=0x0000000000243300 "I"
 *   insn=0x0000000000243300 string=0x0000000000243304 ""
 *   insn=0x0000000000243304 string=0x0000000000243308 "!"
 *   insn=0x000000000024330C string=0x0000000000243310 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::SetValueForBindedProperty(__int64 this, int a2, const Caver::BindingValue *a3)
{
  __int64 v3; // x10
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w11
  bool v7; // cc
  __int64 *v8; // x11

  v3 = *(_QWORD *)(this + 80);
  v4 = this + 72;
  v5 = this + 72;
  if ( v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v3 + 32);
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = (__int64 *)(v3 + 16);
      else
        v8 = (__int64 *)(v3 + 24);
      if ( !v7 )
        v5 = v3;
      v3 = *v8;
    }
    while ( *v8 );
  }
  if ( v5 != v4 )
  {
    if ( *(_DWORD *)(v5 + 32) > a2 )
      v5 = this + 72;
    if ( v5 != v4 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 56) + 16LL))(
               *(_QWORD *)(v5 + 56),
               **((unsigned int **)a3 + 1));
  }
  return this;
}

