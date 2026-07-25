/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021A864
 * Mangled: _ZN5Caver23CollisionShapeComponent7PrepareEv
 * Demangled: Caver::CollisionShapeComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200C30  Caver::CollisionShapeComponent::RegisterLibrary(void)
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000021A874 string=0x000000000021A878 "h"
 *   insn=0x000000000021A878 string=0x000000000021A87C ""
 *   insn=0x000000000021A87C string=0x000000000021A880 "a&"
 *   insn=0x000000000021A880 string=0x000000000021A884 "`"
 *   insn=0x000000000021A884 string=0x000000000021A888 "!"
 *   insn=0x000000000021A888 string=0x000000000021A88C "U"
 *   insn=0x000000000021A888 string=0x000000000021C130 "@&"
 *   insn=0x000000000021A894 string=0x000000000021A898 "h29"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::Prepare(Caver::SceneObject **this)
{
  __int64 result; // x0

  result = Caver::CollisionShapeComponent::RegisterLibrary((Caver::CollisionShapeComponent *)this);
  if ( *((_BYTE *)this + 378) )
  {
    result = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::GroundMeshComponent::Interface);
    *((_BYTE *)this + 460) = result != 0;
  }
  return result;
}

