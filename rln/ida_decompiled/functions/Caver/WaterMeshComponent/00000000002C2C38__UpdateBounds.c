/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2C38
 * Mangled: _ZN5Caver18WaterMeshComponent12UpdateBoundsEv
 * Demangled: Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Callers: 1
 *   0x00000000001F9040  Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Callees: 5
 *   0x00000000001F5390  Caver::VertexArrayObject::Reset(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 32
 *   insn=0x00000000002C2C44 string=0x00000000002C2C48 "T"
 *   insn=0x00000000002C2C54 string=0x00000000002C2C58 "hB@"
 *   insn=0x00000000002C2C5C string=0x00000000002C2C60 "`"
 *   insn=0x00000000002C2C68 string=0x00000000002C2C6C "hB@"
 *   insn=0x00000000002C2C68 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C2C6C string=0x00000000002C2C70 ""
 *   insn=0x00000000002C2C7C string=0x00000000001F6FC0 "P'"
 *   insn=0x00000000002C2C88 string=0x00000000002C2C8C "\t"
 *   insn=0x00000000002C2C8C string=0x00000000002C2C90 " "
 *   insn=0x00000000002C2C90 string=0x00000000002C2C94 "!8""
 *   insn=0x00000000002C2C94 string=0x00000000002C2C98 "!"
 *   insn=0x00000000002C2C98 string=0x00000000002C2C9C "   "
 *   insn=0x00000000002C2C9C string=0x00000000002C2CA0 "h"
 *   insn=0x00000000002C2CA0 string=0x00000000002C2CA4 "a"
 *   insn=0x00000000002C2CA8 string=0x00000000002C2CAC "A8!"
 *   insn=0x00000000002C2CAC string=0x00000000002C2CB0 "!"
 *   insn=0x00000000002C2CB0 string=0x00000000002C2CB4 "   "
 *   insn=0x00000000002C2CBC string=0x00000000002C2CC0 "b"
 *   insn=0x00000000002C2CC0 string=0x00000000002C2CC4 "!8""
 *   insn=0x00000000002C2CC4 string=0x00000000002C2CC8 "!"
 *   insn=0x00000000002C2CC8 string=0x00000000002C2CCC "   "
 *   insn=0x00000000002C2CD0 string=0x00000000002C2CD4 "a"
 *   insn=0x00000000002C2CD8 string=0x00000000002C2CDC "A8!"
 *   insn=0x00000000002C2CDC string=0x00000000002C2CE0 "!"
 *   insn=0x00000000002C2CE0 string=0x00000000002C2CE4 "   "
 *   insn=0x00000000002C2CE4 string=0x00000000002C2CE8 "I"
 *   insn=0x00000000002C2CF8 string=0x00000000002C2CFC "`"
 *   insn=0x00000000002C2CF8 string=0x00000000001F73A0 "0'"
 *   insn=0x00000000002C2D00 string=0x00000000001F5390 "P'"
 *   insn=0x00000000002C2D08 string=0x00000000002C2D0C "h"
 *   insn=0x00000000002C2D1C string=0x00000000002C2D30 "h"
 *   insn=0x00000000002C2D30 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::WaterMeshComponent::UpdateBounds(Caver::WaterMeshComponent *this)
{
  __int64 v2; // x8
  __int64 *result; // x0
  __int128 v4; // [xsp+8h] [xbp-28h] BYREF
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 16);
  if ( v2
    || (result = (__int64 *)Caver::ComponentOutletBase::Connect((Caver::WaterMeshComponent *)((char *)this + 112), this),
        (v2 = *((_QWORD *)this + 16)) != 0) )
  {
    result = Caver::Shape::Bounds((__int64 *)&v4, (Caver::Shape *)(v2 + 112));
    if ( fabsf(*(float *)&v4 - *((float *)this + 34)) > 0.0001
      || fabsf(*((float *)&v4 + 1) - *((float *)this + 35)) > 0.0001
      || fabsf(*((float *)&v4 + 2) - *((float *)this + 36)) > 0.0001
      || fabsf(*((float *)&v4 + 3) - *((float *)this + 37)) > 0.0001 )
    {
      *(_OWORD *)((char *)this + 136) = v4;
      Caver::Component::UpdateObjectBounds(this);
      result = (__int64 *)Caver::VertexArrayObject::Reset((Caver::WaterMeshComponent *)((char *)this + 224));
      *((_BYTE *)this + 296) = 0;
      *((_BYTE *)this + 320) = 1;
    }
  }
  return result;
}

