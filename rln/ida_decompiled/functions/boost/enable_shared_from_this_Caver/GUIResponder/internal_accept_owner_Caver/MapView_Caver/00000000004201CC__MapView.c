/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004201CC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7MapViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *
 * Callers: 1
 *   0x0000000000200BB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000200DE0  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 112
 *   insn=0x00000000004201DC string=0x00000000004201E0 "`"
 *   insn=0x00000000004201E0 string=0x00000000004201E4 ""
 *   insn=0x00000000004201E0 string=0x00000000004201EC "3"
 *   insn=0x00000000004201E4 string=0x00000000004201E8 "h"
 *   insn=0x00000000004201F0 string=0x00000000004201F4 "h"
 *   insn=0x00000000004201F4 string=0x00000000004201F8 ""
 *   insn=0x00000000004201F8 string=0x00000000004201FC "h"
 *   insn=0x000000000042020C string=0x0000000000420210 "h\n@"
 *   insn=0x0000000000420210 string=0x0000000000420214 ""
 *   insn=0x0000000000420214 string=0x0000000000420218 "h\n"
 *   insn=0x000000000042021C string=0x0000000000420220 "@"
 *   insn=0x0000000000420220 string=0x0000000000420224 ""
 *   insn=0x0000000000420224 string=0x0000000000420228 ""
 *   insn=0x000000000042022C string=0x0000000000420230 ""
 *   insn=0x0000000000420230 string=0x0000000000420234 "@"
 *   insn=0x0000000000420240 string=0x0000000000420244 "h"
 *   insn=0x0000000000420244 string=0x0000000000420248 ""
 *   insn=0x0000000000420248 string=0x000000000042024C "h"
 *   insn=0x000000000042024C string=0x0000000000420250 "!"
 *   insn=0x0000000000420250 string=0x0000000000420254 "h"
 *   insn=0x0000000000420258 string=0x000000000042025C "\t@"
 *   insn=0x0000000000420260 string=0x0000000000420264 "h\n@"
 *   insn=0x0000000000420264 string=0x0000000000420268 ""
 *   insn=0x0000000000420268 string=0x000000000042026C "h\n"
 *   insn=0x0000000000420270 string=0x0000000000420280 "h"
 *   insn=0x0000000000420290 string=0x0000000000420294 " "
 *   insn=0x0000000000420298 string=0x000000000042029C "3"
 *   insn=0x000000000042029C string=0x00000000004202A0 "h"
 *   insn=0x00000000004202A0 string=0x00000000004202A4 ""
 *   insn=0x00000000004202A4 string=0x00000000004202A8 "h"
 *   insn=0x00000000004202AC string=0x00000000004202B0 "h"
 *   insn=0x00000000004202B0 string=0x00000000004202B4 "\t@"
 *   insn=0x00000000004202BC string=0x00000000004202C0 "h\n@"
 *   insn=0x00000000004202C0 string=0x00000000004202C4 ""
 *   insn=0x00000000004202C4 string=0x00000000004202C8 "h\n"
 *   insn=0x00000000004202CC string=0x00000000004202D0 "h"
 *   insn=0x00000000004202D0 string=0x00000000004202D4 "@"
 *   insn=0x00000000004202E0 string=0x00000000004202E4 "x"
 *   insn=0x00000000004202FC string=0x0000000000420300 "U"
 *   insn=0x0000000000420310 string=0x0000000000420314 "("
 *   insn=0x0000000000420314 string=0x0000000000420318 "YC"
 *   insn=0x000000000042031C string=0x0000000000420320 " "
 *   insn=0x0000000000420324 string=0x0000000000420328 "A"
 *   insn=0x0000000000420328 string=0x000000000042032C "h"
 *   insn=0x0000000000420348 string=0x00000000001FA350 "0'"
 *   insn=0x0000000000420350 string=0x00000000005942D0 "ui_notification_background"
 *   insn=0x0000000000420378 string=0x000000000042037C ")"
 *   insn=0x000000000042037C string=0x0000000000420380 ")"
 *   insn=0x0000000000420388 string=0x000000000042038C "a\t"
 *   insn=0x000000000042038C string=0x00000000004204B8 ")"
 *   insn=0x0000000000420394 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004203C8 string=0x00000000001FCB10 "0'"
 *   insn=0x00000000004203D4 string=0x00000000004203D8 "^"
 *   insn=0x00000000004203D8 string=0x00000000004203DC "hRO"
 *   insn=0x00000000004203E8 string=0x00000000004203EC "i""
 *   insn=0x00000000004203F0 string=0x00000000004203F4 "4"
 *   insn=0x00000000004203F8 string=0x00000000004203FC ""
 *   insn=0x0000000000420408 string=0x000000000042040C "\t@"
 *   insn=0x0000000000420418 string=0x000000000042041C ""
 *   insn=0x0000000000420428 string=0x000000000042042C "@"
 *   insn=0x000000000042044C string=0x00000000001F9730 "0'"
 *   insn=0x0000000000420450 string=0x0000000000420454 "`z@"
 *   insn=0x0000000000420454 string=0x0000000000420458 "a"
 *   insn=0x0000000000420458 string=0x000000000042045C "\t"
 *   insn=0x0000000000420474 string=0x0000000000420478 "@"
 *   insn=0x0000000000420478 string=0x000000000042047C ""
 *   insn=0x000000000042047C string=0x0000000000420480 ""
 *   insn=0x0000000000420484 string=0x0000000000420488 ""
 *   insn=0x0000000000420488 string=0x000000000042048C ""
 *   insn=0x00000000004204A0 string=0x00000000004204FC "uW"
 *   insn=0x00000000004204B8 string=0x00000000004204BC ")=G"
 *   insn=0x00000000004204BC string=0x00000000004204C0 "!"
 *   insn=0x00000000004204C4 string=0x00000000004204C8 "\t"
 *   insn=0x00000000004204C4 string=0x00000000004204DC "\t"
 *   insn=0x00000000004204C8 string=0x00000000004204CC "*"
 *   insn=0x00000000004204CC string=0x00000000004204D0 "\n"
 *   insn=0x00000000004204D8 string=0x00000000004204E8 "?"
 *   insn=0x00000000004204DC string=0x00000000004204E0 "*"
 *   insn=0x00000000004204E0 string=0x00000000004204E4 "\n"
 *   insn=0x00000000004204E8 string=0x00000000004204EC ","
 *   insn=0x00000000004204FC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000420504 string=0x0000000000420508 "*"
 *   insn=0x0000000000420508 string=0x000000000042050C "J"
 *   insn=0x0000000000420510 string=0x0000000000420514 "(a"
 *   insn=0x000000000042051C string=0x0000000000420520 "*"
 *   insn=0x000000000042051C string=0x00000000004205B8 "u~@"
 *   insn=0x0000000000420520 string=0x0000000000420524 "J=G"
 *   insn=0x0000000000420524 string=0x0000000000420528 ")!"
 *   insn=0x000000000042052C string=0x0000000000420530 "*"
 *   insn=0x000000000042052C string=0x0000000000420560 "*"
 *   insn=0x0000000000420530 string=0x0000000000420534 "K"
 *   insn=0x0000000000420534 string=0x0000000000420538 "+"
 *   insn=0x000000000042053C string=0x0000000000420540 "_"
 *   insn=0x0000000000420550 string=0x0000000000420554 "u~@"
 *   insn=0x0000000000420554 string=0x0000000000420558 "U"
 *   insn=0x0000000000420558 string=0x000000000042055C ")"
 *   insn=0x0000000000420560 string=0x0000000000420564 "K"
 *   insn=0x0000000000420564 string=0x0000000000420568 "+"
 *   insn=0x0000000000420568 string=0x000000000042056C "_"
 *   insn=0x0000000000420580 string=0x0000000000420584 "u~@"
 *   insn=0x0000000000420598 string=0x000000000042059C "@"
 *   insn=0x000000000042059C string=0x00000000004205A0 ""
 *   insn=0x00000000004205A0 string=0x00000000004205A4 ""
 *   insn=0x00000000004205A8 string=0x00000000004205AC ""
 *   insn=0x00000000004205AC string=0x00000000004205B0 ""
 *   insn=0x00000000004205B8 string=0x00000000004205BC "5"
 *   insn=0x00000000004205C0 string=0x00000000004205C4 ""
 *   insn=0x00000000004205D0 string=0x00000000004205D4 "\t@"
 *   insn=0x00000000004205E0 string=0x00000000004205E4 ""
 *   insn=0x00000000004205F0 string=0x00000000004205F4 "@"
 *   insn=0x0000000000420600 string=0x0000000000420604 "z"
 *   insn=0x000000000042060C string=0x0000000000420610 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

