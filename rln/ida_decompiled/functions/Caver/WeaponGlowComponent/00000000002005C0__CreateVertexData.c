/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002005C0
 * Mangled: ._ZN5Caver19WeaponGlowComponent16CreateVertexDataEiiiiPfS1_
 * Demangled: Caver::WeaponGlowComponent::CreateVertexData(int,int,int,int,float *,float *)
 *
 * Callers: 1
 *   0x00000000002CB9AC  Caver::WeaponGlowComponent::CreateVertexData(void)
 *
 * Callees: 1
 *   0x00000000002CBAE8  Caver::WeaponGlowComponent::CreateVertexData(int,int,int,int,float *,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002005C8 string=0x00000000002005CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponGlowComponent::CreateVertexData(
        Caver::WeaponGlowComponent *this,
        int a2,
        int a3,
        int a4,
        int a5,
        float *a6,
        float *a7)
{
  return _ZN5Caver19WeaponGlowComponent16CreateVertexDataEiiiiPfS1_(this, a2, a3, a4, a5, a6, a7);
}

