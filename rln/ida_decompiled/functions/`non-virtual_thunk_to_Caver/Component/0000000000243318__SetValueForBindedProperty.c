/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243318
 * Mangled: _ZThn16_N5Caver9Component25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x0000000000243318 string=0x000000000024331C ""
 *   insn=0x0000000000243320 string=0x0000000000243324 "*"
 *   insn=0x0000000000243324 string=0x0000000000243328 "K!@"
 *   insn=0x0000000000243324 string=0x0000000000243348 "?"
 *   insn=0x0000000000243328 string=0x000000000024332C "La"
 *   insn=0x000000000024332C string=0x0000000000243330 "MA"
 *   insn=0x0000000000243338 string=0x000000000024333C ")"
 *   insn=0x000000000024333C string=0x0000000000243340 "j"
 *   insn=0x0000000000243340 string=0x0000000000243344 "*"
 *   insn=0x000000000024334C string=0x0000000000243350 "*!@"
 *   insn=0x0000000000243350 string=0x0000000000243354 "_"
 *   insn=0x0000000000243354 string=0x0000000000243358 "\t"
 *   insn=0x0000000000243358 string=0x000000000024335C "?"
 *   insn=0x0000000000243360 string=0x0000000000243364 " "
 *   insn=0x0000000000243364 string=0x0000000000243368 "I"
 *   insn=0x0000000000243368 string=0x000000000024336C ""
 *   insn=0x000000000024336C string=0x0000000000243370 "!"
 *   insn=0x0000000000243374 string=0x0000000000243378 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::Component::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v3; // x10
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w11
  bool v7; // cc
  __int64 *v8; // x11

  v3 = *(_QWORD *)(this + 64);
  v4 = this + 56;
  v5 = this + 56;
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
      v5 = this + 56;
    if ( v5 != v4 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 56) + 16LL))(
               *(_QWORD *)(v5 + 56),
               **((unsigned int **)a3 + 1));
  }
  return this;
}

