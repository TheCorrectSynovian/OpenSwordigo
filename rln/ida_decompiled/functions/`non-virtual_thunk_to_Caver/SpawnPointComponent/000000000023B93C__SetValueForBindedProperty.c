/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023B93C
 * Mangled: _ZThn16_N5Caver19SpawnPointComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SpawnPointComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *
 * Referenced strings: 14
 *   insn=0x000000000023B948 string=0x000000000023B94C "T"
 *   insn=0x000000000023B950 string=0x000000000023B954 "?"
 *   insn=0x000000000023B964 string=0x000000000023B968 "H"
 *   insn=0x000000000023B968 string=0x000000000023B96C ""
 *   insn=0x000000000023B96C string=0x000000000023B970 "hr"
 *   insn=0x000000000023B970 string=0x000000000023B974 ""
 *   insn=0x000000000023B97C string=0x000000000023B980 "L"
 *   insn=0x000000000023B980 string=0x00000000001FCAB0 "0'"
 *   insn=0x000000000023B984 string=0x000000000023B988 "hB"
 *   insn=0x000000000023B98C string=0x000000000023B990 "h~"
 *   insn=0x000000000023B998 string=0x000000000023B99C "a"
 *   insn=0x000000000023B99C string=0x00000000001F9320 "0'"
 *   insn=0x000000000023B9AC string=0x000000000023B9C0 "D"
 *   insn=0x000000000023B9C0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::SpawnPointComponent::SetValueForBindedProperty(
        Caver::SpawnPointComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int64 v4; // [xsp+8h] [xbp-28h]
  int v5; // [xsp+10h] [xbp-20h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 1 )
  {
    Caver::BindingValue::Vector3Value(a3);
    *(_QWORD *)(v3 + 116) = v4;
    *((_DWORD *)v3 + 31) = v5;
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty((Caver::SpawnPointComponent *)((char *)this - 16), a2, a3);
  }
  else
  {
    *((_DWORD *)this + 24) = **((_DWORD **)a3 + 1);
  }
}

