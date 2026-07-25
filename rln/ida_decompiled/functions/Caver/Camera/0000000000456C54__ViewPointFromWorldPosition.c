/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456C54
 * Mangled: _ZNK5Caver6Camera26ViewPointFromWorldPositionERKNS_7Vector3EPf
 * Demangled: Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *
 * Callers: 1
 *   0x00000000001FA4C0  Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *
 * Callees: 1
 *   0x00000000001FD140  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000456C5C string=0x0000000000456C60 "8"
 *   insn=0x0000000000456C60 string=0x00000000001FD140 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::Camera::ViewPointFromWorldPosition@<X0>(
        Caver::Camera *this@<X0>,
        const Caver::Vector3 *a2@<X1>,
        float *a3@<X2>,
        __int64 *a4@<X8>)
{
  return Caver::Camera::ScreenPointFromWorldPosition(a4, this, a2, this, a3);
}

