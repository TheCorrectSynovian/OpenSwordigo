/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045807C
 * Mangled: _ZN5Caver16CameraControllerC2Ev
 * Demangled: Caver::CameraController::CameraController(void)
 *
 * Callers: 1
 *   0x00000000001F4EA0  Caver::CameraController::CameraController(void)
 *
 * Callees: 15
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5E10  Caver::Camera::EvaluateViewMatrix(void)
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAF00  Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200CA0  Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202C40  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *   0x0000000000203C70  .sinf
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 146
 *   insn=0x000000000045808C string=0x0000000000458090 "U"
 *   insn=0x0000000000458094 string=0x0000000000458098 "i"
 *   insn=0x0000000000458098 string=0x000000000045809C ")"
 *   insn=0x00000000004580BC string=0x00000000004580C0 "()@)h*"
 *   insn=0x00000000004580C0 string=0x00000000004580C4 "h*"
 *   insn=0x00000000004580C4 string=0x00000000004580C8 ")\t@"
 *   insn=0x00000000004580C8 string=0x00000000004580CC "h*"
 *   insn=0x00000000004580CC string=0x00000000004580D0 "h*"
 *   insn=0x00000000004580D0 string=0x00000000004580D4 "h*\t)i")j&)iR"
 *   insn=0x00000000004580D4 string=0x00000000004580D8 "i")j&)iR"
 *   insn=0x00000000004580D8 string=0x00000000004580DC "j&)iR"
 *   insn=0x00000000004580DC string=0x00000000004580E0 "iR"
 *   insn=0x00000000004580E0 string=0x00000000004580E4 "i~"
 *   insn=0x00000000004580E4 string=0x00000000004580E8 "i~"
 *   insn=0x00000000004580EC string=0x00000000004580F0 "<u"
 *   insn=0x00000000004580F0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045810C string=0x0000000000458110 "4u"
 *   insn=0x0000000000458110 string=0x0000000000458114 "i"
 *   insn=0x0000000000458114 string=0x0000000000458118 ")-B"
 *   insn=0x0000000000458124 string=0x0000000000458128 "(A"
 *   insn=0x000000000045812C string=0x0000000000458130 ""
 *   insn=0x0000000000458144 string=0x0000000000458148 "h"
 *   insn=0x0000000000458154 string=0x0000000000458158 "i"
 *   insn=0x000000000045815C string=0x0000000000458160 "4"
 *   insn=0x0000000000458164 string=0x0000000000458168 ""
 *   insn=0x0000000000458174 string=0x0000000000458178 "\t@"
 *   insn=0x0000000000458184 string=0x0000000000458188 ""
 *   insn=0x0000000000458194 string=0x0000000000458198 "@"
 *   insn=0x00000000004581B0 string=0x00000000004581C8 "Bx"
 *   insn=0x00000000004581C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004581CC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004581D0 string=0x00000000004581D4 "7|"
 *   insn=0x00000000004581D4 string=0x00000000004581D8 "f"
 *   insn=0x00000000004581D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004581E0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004581E4 string=0x00000000004581F0 "`:@"
 *   insn=0x00000000004581F4 string=0x00000000004581F8 "@"
 *   insn=0x00000000004581F4 string=0x0000000000458214 "`6@"
 *   insn=0x00000000004581F8 string=0x00000000004581FC ""
 *   insn=0x00000000004581FC string=0x0000000000458200 ""
 *   insn=0x0000000000458204 string=0x0000000000458208 ""
 *   insn=0x0000000000458208 string=0x000000000045820C ""
 *   insn=0x0000000000458218 string=0x000000000045821C "@"
 *   insn=0x0000000000458218 string=0x0000000000458238 "s2@"
 *   insn=0x000000000045821C string=0x0000000000458220 ""
 *   insn=0x0000000000458220 string=0x0000000000458224 ""
 *   insn=0x0000000000458228 string=0x000000000045822C ""
 *   insn=0x000000000045822C string=0x0000000000458230 ""
 *   insn=0x0000000000458238 string=0x000000000045823C "3"
 *   insn=0x000000000045823C string=0x0000000000458240 "h"
 *   insn=0x0000000000458240 string=0x0000000000458244 ""
 *   insn=0x0000000000458244 string=0x0000000000458248 "h"
 *   insn=0x000000000045824C string=0x0000000000458250 "h"
 *   insn=0x0000000000458250 string=0x0000000000458254 "\t@"
 *   insn=0x000000000045825C string=0x0000000000458260 "h\n@"
 *   insn=0x0000000000458260 string=0x0000000000458264 ""
 *   insn=0x0000000000458264 string=0x0000000000458268 "h\n"
 *   insn=0x000000000045826C string=0x0000000000458270 "h"
 *   insn=0x0000000000458270 string=0x0000000000458274 "@"
 *   insn=0x0000000000458284 string=0x0000000000458288 "1"
 *   insn=0x00000000004582A4 string=0x00000000004582A8 "V"
 *   insn=0x00000000004582C8 string=0x00000000004582CC "I\t"
 *   insn=0x00000000004582CC string=0x0000000000583944 "\n"
 *   insn=0x00000000004582E4 string=0x00000000004582E8 "080"
 *   insn=0x00000000004582E8 string=0x00000000004582EC "0\n0"
 *   insn=0x0000000000458318 string=0x000000000045831C "282"
 *   insn=0x0000000000458320 string=0x0000000000458324 "1\n2"
 *   insn=0x000000000045832C string=0x0000000000458330 "1Z!"
 *   insn=0x0000000000458338 string=0x000000000045833C "c"
 *   insn=0x0000000000458358 string=0x000000000045835C "$EI"
 *   insn=0x000000000045835C string=0x0000000000458360 "` $"
 *   insn=0x0000000000458360 string=0x0000000000458364 "m"
 *   insn=0x0000000000458364 string=0x0000000000458368 "d"
 *   insn=0x0000000000458364 string=0x00000000004583D0 "H\t"
 *   insn=0x0000000000458368 string=0x000000000045836C "c8 "
 *   insn=0x0000000000458370 string=0x0000000000458374 "c"
 *   insn=0x0000000000458370 string=0x0000000000595820 "333"
 *   insn=0x0000000000458390 string=0x0000000000458394 "`"
 *   insn=0x0000000000458394 string=0x0000000000458398 "a(!"
 *   insn=0x000000000045839C string=0x00000000004583A0 "(%"
 *   insn=0x00000000004583A0 string=0x00000000004583A4 "3"
 *   insn=0x00000000004583BC string=0x00000000004583C0 "`"
 *   insn=0x00000000004583C0 string=0x00000000004583C4 "A($"
 *   insn=0x00000000004583D0 string=0x0000000000583734 "o"
 *   insn=0x00000000004583E0 string=0x00000000004583E4 "`"
 *   insn=0x00000000004583E0 string=0x00000000001F5F50 "P'"
 *   insn=0x00000000004583E4 string=0x00000000004583E8 "`"
 *   insn=0x00000000004583E4 string=0x0000000000458450 "h6@"
 *   insn=0x00000000004583E8 string=0x00000000004583EC "a"
 *   insn=0x00000000004583EC string=0x00000000004583F0 "bF@"
 *   insn=0x00000000004583F0 string=0x00000000004583F4 "c:@"
 *   insn=0x00000000004583F4 string=0x00000000004583F8 "`"
 *   insn=0x0000000000458400 string=0x0000000000458404 "A8#"
 *   insn=0x000000000045840C string=0x0000000000458410 "b""
 *   insn=0x0000000000458418 string=0x000000000045841C "!"
 *   insn=0x000000000045841C string=0x0000000000458420 "t.@"
 *   insn=0x000000000045842C string=0x00000000001FAF00 "0'"
 *   insn=0x000000000045843C string=0x0000000000458440 "!@!"
 *   insn=0x0000000000458450 string=0x0000000000458454 ""
 *   insn=0x0000000000458458 string=0x000000000045845C "a>@"
 *   insn=0x0000000000458460 string=0x0000000000458464 "c"
 *   insn=0x000000000045846C string=0x0000000000458470 "`"
 *   insn=0x0000000000458470 string=0x0000000000458474 "A(#"
 *   insn=0x0000000000458474 string=0x0000000000458478 "bB@"
 *   insn=0x0000000000458478 string=0x000000000045847C "h"
 *   insn=0x0000000000458488 string=0x000000000045848C "b"
 *   insn=0x000000000045848C string=0x0000000000458490 "h"
 *   insn=0x0000000000458494 string=0x000000000045849C "a*"
 *   insn=0x000000000045849C string=0x00000000004584A0 "!(""
 *   insn=0x00000000004584A0 string=0x00000000004584A4 "h."
 *   insn=0x00000000004584A4 string=0x00000000004584A8 "`\n"
 *   insn=0x00000000004584A8 string=0x00000000004584AC "a"
 *   insn=0x00000000004584AC string=0x00000000004584B0 ")"
 *   insn=0x00000000004584B0 string=0x0000000000458554 "`.@"
 *   insn=0x00000000004584B4 string=0x00000000004584B8 "("
 *   insn=0x00000000004584BC string=0x00000000004584C0 "b"
 *   insn=0x00000000004584BC string=0x00000000004584D4 "h"
 *   insn=0x00000000004584CC string=0x00000000004584D0 "!"
 *   insn=0x00000000004584DC string=0x00000000004584E0 "a"
 *   insn=0x00000000004584E0 string=0x00000000004584E4 "b2@"
 *   insn=0x00000000004584E4 string=0x00000000004584E8 "cBA"
 *   insn=0x00000000004584E8 string=0x00000000004584EC "dBC"
 *   insn=0x00000000004584F4 string=0x00000000004584F8 "!8""
 *   insn=0x00000000004584F8 string=0x00000000004584FC "b"
 *   insn=0x00000000004584FC string=0x0000000000458500 "!!"
 *   insn=0x0000000000458500 string=0x0000000000458504 "B"
 *   insn=0x0000000000458504 string=0x0000000000458508 "!(""
 *   insn=0x0000000000458508 string=0x000000000045850C "B"
 *   insn=0x000000000045850C string=0x0000000000458510 "!(""
 *   insn=0x0000000000458510 string=0x0000000000458514 "   "
 *   insn=0x0000000000458518 string=0x000000000045851C "a"@"
 *   insn=0x000000000045851C string=0x0000000000458520 "b>@"
 *   insn=0x0000000000458520 string=0x0000000000458524 "cBB"
 *   insn=0x0000000000458524 string=0x0000000000458528 "d"@"
 *   insn=0x0000000000458528 string=0x000000000045852C "!8""
 *   insn=0x000000000045852C string=0x0000000000458530 "!!"
 *   insn=0x0000000000458530 string=0x0000000000458534 "b"
 *   insn=0x0000000000458534 string=0x0000000000458538 "B"
 *   insn=0x0000000000458538 string=0x000000000045853C "!(""
 *   insn=0x000000000045853C string=0x0000000000458540 "B"
 *   insn=0x0000000000458540 string=0x0000000000458544 "!(""
 *   insn=0x0000000000458544 string=0x0000000000458548 "   "
 *   insn=0x0000000000458548 string=0x000000000045854C "E"
 *   insn=0x0000000000458554 string=0x0000000000458558 ".v"
 *   insn=0x0000000000458558 string=0x00000000001F5E10 "P'"
 *   insn=0x0000000000458568 string=0x0000000000458588 "Rw"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CameraController::CameraController(Caver::CameraController *this)
{
  int v2; // w8
  int v3; // w10
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x0
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // [xsp+B0h] [xbp-38h]
  __int64 v11; // [xsp+B8h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *(_QWORD *)((char *)this + 148) = 0;
  *(_QWORD *)((char *)this + 140) = 0;
  *(_QWORD *)((char *)this + 132) = 0;
  v2 = Caver::Vector3Zero;
  v3 = HIDWORD(Caver::Vector3Zero);
  *((_DWORD *)this + 4) = Caver::Vector3Zero;
  *((_DWORD *)this + 5) = v3;
  v4 = dword_6E9F38;
  *((_DWORD *)this + 12) = v2;
  *((_DWORD *)this + 13) = v3;
  *((_DWORD *)this + 8) = v2;
  *((_DWORD *)this + 9) = v3;
  *((_DWORD *)this + 18) = v2;
  *((_DWORD *)this + 19) = v3;
  *((_DWORD *)this + 14) = v4;
  *((_DWORD *)this + 15) = v2;
  *((_DWORD *)this + 16) = v3;
  *((_DWORD *)this + 17) = v4;
  *((_DWORD *)this + 20) = v4;
  *((_QWORD *)this + 3) = v4;
  *((_QWORD *)this + 5) = v4;
  v5 = operator new(0x1C0u);
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 244) = 0;
  v10 = v5;
  *(_BYTE *)(v5 + 236) = 1;
  v6 = operator new(0x20u);
  *(_QWORD *)(v6 + 24) = v5;
  *(int64x2_t *)(v6 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v6 = &off_6D4708;
  v11 = v6;
  boost::detail::sp_enable_shared_from_this();
  v7 = (_QWORD *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 11) = v10;
  *((_QWORD *)this + 12) = v11;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
}

