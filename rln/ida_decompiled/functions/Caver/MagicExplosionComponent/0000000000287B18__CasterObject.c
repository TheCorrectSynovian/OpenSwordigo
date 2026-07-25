/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287B18
 * Mangled: _ZN5Caver23MagicExplosionComponent12CasterObjectEv
 * Demangled: Caver::MagicExplosionComponent::CasterObject(void)
 *
 * Callers: 1
 *   0x00000000001FFCC0  Caver::MagicExplosionComponent::CasterObject(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000287B18 string=0x0000000000287B1C "\t"
 *   insn=0x0000000000287B20 string=0x0000000000287B24 "(\t@"
 *   insn=0x0000000000287B24 string=0x0000000000287B28 ""
 *   insn=0x0000000000287B28 string=0x0000000000287B2C "(\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MagicExplosionComponent::CasterObject@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x9

  v2 = *(_QWORD *)(this + 384);
  *a2 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  return this;
}

