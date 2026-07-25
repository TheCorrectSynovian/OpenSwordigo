/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000238BD4
 * Mangled: _ZN5Caver14ShapeComponent21SetDefaultShapeOfTypeENS_5Shape4TypeE
 * Demangled: Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Callers: 1
 *   0x00000000001FF3E0  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Callees: 7
 *   0x00000000001F61A0  Caver::Shape::ShapeWithCircle(Caver::Circle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD7C0  Caver::Shape::ShapeWithRectangle(Caver::Rectangle const&)
 *   0x00000000001FF660  Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&)
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x0000000000238BE4 string=0x0000000000238BE8 "T"
 *   insn=0x0000000000238BF0 string=0x0000000000238BF4 "?"
 *   insn=0x0000000000238BFC string=0x0000000000238C00 "?"
 *   insn=0x0000000000238BFC string=0x0000000000238C38 "h"
 *   insn=0x0000000000238C00 string=0x0000000000238C04 "A"
 *   insn=0x0000000000238C04 string=0x0000000000238C08 "h"
 *   insn=0x0000000000238C08 string=0x0000000000238C0C "i"
 *   insn=0x0000000000238C0C string=0x0000000000238C10 " "
 *   insn=0x0000000000238C24 string=0x00000000001FD7C0 "0'"
 *   insn=0x0000000000238C40 string=0x0000000000238C44 "I"
 *   insn=0x0000000000238C50 string=0x0000000000238C54 "S"
 *   insn=0x0000000000238C54 string=0x00000000001F61A0 "0'"
 *   insn=0x0000000000238C64 string=0x0000000000238C68 "3"
 *   insn=0x0000000000238C68 string=0x0000000000238C6C "h"
 *   insn=0x0000000000238C6C string=0x0000000000238C70 ""
 *   insn=0x0000000000238C70 string=0x0000000000238C74 "h"
 *   insn=0x0000000000238C78 string=0x0000000000238C7C "h"
 *   insn=0x0000000000238C80 string=0x0000000000238C84 "\t@"
 *   insn=0x0000000000238C88 string=0x0000000000238C8C "h\n@"
 *   insn=0x0000000000238C8C string=0x0000000000238C90 ""
 *   insn=0x0000000000238C90 string=0x0000000000238C94 "h\n"
 *   insn=0x0000000000238C98 string=0x0000000000238C9C "h"
 *   insn=0x0000000000238CA0 string=0x0000000000238CA4 "@"
 *   insn=0x0000000000238CD0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000238CE0 string=0x0000000000238CE4 ""
 *   insn=0x0000000000238CE8 string=0x0000000000238CEC "!"
 *   insn=0x0000000000238CF0 string=0x0000000000238CF4 "\t@"
 *   insn=0x0000000000238D00 string=0x0000000000238D04 ""
 *   insn=0x0000000000238D08 string=0x0000000000238D0C "!"
 *   insn=0x0000000000238D10 string=0x0000000000238D14 "@"
 *   insn=0x0000000000238D28 string=0x0000000000238D2C "4"
 *   insn=0x0000000000238D30 string=0x0000000000238D34 ""
 *   insn=0x0000000000238D40 string=0x0000000000238D44 "\t@"
 *   insn=0x0000000000238D50 string=0x0000000000238D54 ""
 *   insn=0x0000000000238D60 string=0x0000000000238D64 "@"
 *   insn=0x0000000000238D74 string=0x0000000000238D78 "uU"
 *   insn=0x0000000000238D88 string=0x0000000000238D8C "T"
 *   insn=0x0000000000238D98 string=0x0000000000238D9C "`"
 *   insn=0x0000000000238DA0 string=0x0000000000238DA4 "/"
 *   insn=0x0000000000238DA4 string=0x0000000000238DA8 "hr@"
 *   insn=0x0000000000238DB0 string=0x0000000000238DB4 "h>@"
 *   insn=0x0000000000238DE0 string=0x0000000000238DF8 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShapeComponent::SetDefaultShapeOfType(__int64 result, int a2)
{
  __int64 v2; // x19
  __int64 (__fastcall *v3)(__int64, _BYTE *); // x21
  __int64 (__fastcall *v4)(__int64, _BYTE *); // x21
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  _BYTE v8[16]; // [xsp+50h] [xbp-40h] BYREF
  _QWORD *v9; // [xsp+60h] [xbp-30h]
  __int64 v10; // [xsp+68h] [xbp-28h]

  v2 = result;
  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 2 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)result + 280LL);
    Caver::Shape::ShapeWithCircle();
    result = v4(v2, v8);
  }
  else
  {
    if ( a2 != 1 )
      return result;
    v3 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)result + 280LL);
    Caver::Shape::ShapeWithRectangle();
    result = v3(v2, v8);
  }
  v5 = v9;
  if ( v9 )
  {
    v6 = v9[1] - 1LL;
    v9[1] = v6;
    if ( !v6 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  return result;
}

