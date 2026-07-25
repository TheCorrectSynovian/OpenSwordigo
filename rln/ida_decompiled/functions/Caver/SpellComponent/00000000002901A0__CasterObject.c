/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002901A0
 * Mangled: _ZN5Caver14SpellComponent12CasterObjectEv
 * Demangled: Caver::SpellComponent::CasterObject(void)
 *
 * Callers: 1
 *   0x00000000001F3730  Caver::SpellComponent::CasterObject(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000002901A0 string=0x00000000002901A4 "\t"
 *   insn=0x00000000002901A8 string=0x00000000002901AC "(\t@"
 *   insn=0x00000000002901AC string=0x00000000002901B0 ""
 *   insn=0x00000000002901B0 string=0x00000000002901B4 "(\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SpellComponent::CasterObject@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x9

  v2 = *(_QWORD *)(this + 112);
  *a2 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  return this;
}

