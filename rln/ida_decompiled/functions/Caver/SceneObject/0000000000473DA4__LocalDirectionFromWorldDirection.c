/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473DA4
 * Mangled: _ZN5Caver11SceneObject32LocalDirectionFromWorldDirectionERKNS_7Vector2E
 * Demangled: Caver::SceneObject::LocalDirectionFromWorldDirection(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *
 * Referenced strings: 5
 *   insn=0x0000000000473DB8 string=0x0000000000473DBC "("
 *   insn=0x0000000000473DC4 string=0x0000000000473DC8 "h"
 *   insn=0x0000000000473DCC string=0x00000000001FC440 "0'"
 *   insn=0x0000000000473DD4 string=0x0000000000473DD8 "`"
 *   insn=0x0000000000473DDC string=0x0000000000473DE0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::SceneObject::LocalDirectionFromWorldDirection@<S0>(
        Caver::SceneObject *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        Caver::Vector2 *a3@<X8>)
{
  float v4; // s0
  float result; // s0

  v4 = *((float *)this + 32);
  *(_QWORD *)a3 = *(_QWORD *)a2;
  Caver::Vector2::Rotate(a3, -v4);
  if ( *((_BYTE *)this + 144) )
  {
    result = -*(float *)a3;
    *(float *)a3 = result;
  }
  return result;
}

