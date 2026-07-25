/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021AC6C
 * Mangled: _ZN5Caver23CollisionShapeComponent15SetUpdatedShapeERKNS_5ShapeE
 * Demangled: Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *
 * Callers: 1
 *   0x00000000001FF5A0  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *
 * Callees: 4
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *
 * Referenced strings: 40
 *   insn=0x000000000021AC7C string=0x000000000021AC80 "V"
 *   insn=0x000000000021AC94 string=0x000000000021AC98 "h\n"
 *   insn=0x000000000021ACA0 string=0x000000000021ACA4 "\n"
 *   insn=0x000000000021ACA0 string=0x000000000021ACB0 "u"
 *   insn=0x000000000021ACA4 string=0x000000000021ACA8 "J"
 *   insn=0x000000000021ACA8 string=0x000000000021ACAC "\n"
 *   insn=0x000000000021ACB0 string=0x000000000021ACB4 "i""
 *   insn=0x000000000021ACB4 string=0x000000000021ACB8 "5"
 *   insn=0x000000000021ACBC string=0x000000000021ACC0 ""
 *   insn=0x000000000021ACD0 string=0x000000000021ACD4 "\t@"
 *   insn=0x000000000021ACDC string=0x000000000021ACE0 ""
 *   insn=0x000000000021ACF0 string=0x000000000021ACF4 "@"
 *   insn=0x000000000021AD04 string=0x00000000001F6FC0 "P'"
 *   insn=0x000000000021AD08 string=0x000000000021AD0C "hb"
 *   insn=0x000000000021AD18 string=0x000000000021AD1C "h"
 *   insn=0x000000000021AD24 string=0x000000000021AD28 "6p"
 *   insn=0x000000000021AD28 string=0x000000000021AD2C "t"
 *   insn=0x000000000021AD28 string=0x00000000001F6E00 "0'"
 *   insn=0x000000000021AD30 string=0x000000000021AD34 "I"
 *   insn=0x000000000021AD34 string=0x000000000021AD38 " "
 *   insn=0x000000000021AD40 string=0x000000000021AD44 "!8""
 *   insn=0x000000000021AD44 string=0x000000000021AD48 "!"
 *   insn=0x000000000021AD48 string=0x000000000021AD4C "   "
 *   insn=0x000000000021AD4C string=0x000000000021AD50 "h"
 *   insn=0x000000000021AD58 string=0x000000000021AD5C "A8!"
 *   insn=0x000000000021AD5C string=0x000000000021AD60 "!"
 *   insn=0x000000000021AD60 string=0x000000000021AD64 "   "
 *   insn=0x000000000021AD70 string=0x000000000021AD74 "!8""
 *   insn=0x000000000021AD74 string=0x000000000021AD78 "!"
 *   insn=0x000000000021AD78 string=0x000000000021AD7C "   "
 *   insn=0x000000000021AD88 string=0x000000000021AD8C "A8!"
 *   insn=0x000000000021AD8C string=0x000000000021AD90 "!"
 *   insn=0x000000000021AD90 string=0x000000000021AD94 "   "
 *   insn=0x000000000021AD94 string=0x000000000021AD98 ")"
 *   insn=0x000000000021AD98 string=0x000000000021ADBC "s"
 *   insn=0x000000000021ADB0 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000021ADBC string=0x000000000021ADC0 "h"
 *   insn=0x000000000021ADD0 string=0x000000000021ADD4 "h"
 *   insn=0x000000000021ADE4 string=0x000000000021ADFC "5m"
 *   insn=0x000000000021ADFC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::SetUpdatedShape(
        Caver::CollisionShapeComponent *this,
        const Caver::Shape *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 result; // x0
  __int64 v10; // x20
  Caver::SceneObject *v11; // x19
  float v12[6]; // [xsp+0h] [xbp-50h] BYREF
  __int128 v13; // [xsp+18h] [xbp-38h] BYREF
  __int64 v14; // [xsp+28h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 66) = *(_DWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 34) = v5;
  *((_QWORD *)this + 35) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  Caver::Shape::Bounds((__int64 *)&v13, a2);
  *(_OWORD *)((char *)this + 344) = v13;
  *(_OWORD *)v12 = *(_OWORD *)(*((_QWORD *)this + 5) + 148LL);
  result = Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)v12, (const Caver::Rectangle *)&v13);
  v10 = *((_QWORD *)this + 5);
  if ( fabsf(v12[0] - *(float *)(v10 + 148)) > 0.0001
    || fabsf(v12[1] - *(float *)(v10 + 152)) > 0.0001
    || fabsf(v12[2] - *(float *)(v10 + 156)) > 0.0001
    || fabsf(v12[3] - *(float *)(v10 + 160)) > 0.0001 )
  {
    *(_OWORD *)(v10 + 148) = *(_OWORD *)v12;
    if ( !*(_BYTE *)(v10 + 180) )
    {
      result = Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v10);
      *(_BYTE *)(v10 + 180) = 1;
    }
  }
  v11 = (Caver::SceneObject *)*((_QWORD *)this + 5);
  if ( !*((_BYTE *)v11 + 180) )
  {
    result = Caver::SceneObject::RegisterForWorldBoundsUpdate(v11);
    *((_BYTE *)v11 + 180) = 1;
  }
  return result;
}

