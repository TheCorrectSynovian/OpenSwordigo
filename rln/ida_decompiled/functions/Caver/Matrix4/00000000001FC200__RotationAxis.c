/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC200
 * Mangled: ._ZN5Caver7Matrix412RotationAxisEffff
 * Demangled: Caver::Matrix4::RotationAxis(float,float,float,float)
 *
 * Callers: 2
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000004AF218  Caver::Matrix4::RotationAxis(float,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC208 string=0x00000000001FC20C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::RotationAxis(Caver::Matrix4 *this, float a2, float a3, float a4, float a5)
{
  return _ZN5Caver7Matrix412RotationAxisEffff(this, a2, a3, a4, a5);
}

