/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473D84
 * Mangled: _ZN5Caver11SceneObject32WorldDirectionFromLocalDirectionERKNS_7Vector2E
 * Demangled: Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000203C80  Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *
 * Referenced strings: 5
 *   insn=0x0000000000473D84 string=0x0000000000473D88 "*$@)K"
 *   insn=0x0000000000473D88 string=0x0000000000473D8C "K"
 *   insn=0x0000000000473D8C string=0x0000000000473D90 "J"
 *   insn=0x0000000000473D98 string=0x0000000000473D9C "\n%"
 *   insn=0x0000000000473DA0 string=0x00000000001FC440 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SceneObject::WorldDirectionFromLocalDirection@<X0>(
        Caver::SceneObject *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        Caver::Vector2 *a3@<X8>)
{
  int v3; // w9
  int v4; // w10
  float v5; // s0

  v4 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  if ( *((_BYTE *)this + 144) )
    v4 ^= 0x80000000;
  v5 = *((float *)this + 32);
  *(_DWORD *)a3 = v4;
  *((_DWORD *)a3 + 1) = v3;
  return Caver::Vector2::Rotate(a3, v5);
}

