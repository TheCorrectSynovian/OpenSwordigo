/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046C550
 * Mangled: _ZN5Caver10FastVectorIN5boost10shared_ptrINS_14SceneGridLayerEEEED2Ev
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callers: 1
 *   0x00000000001F62B0  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F70F0  boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *   0x00000000001FAFC0  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FCAF0  Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry *> *)
 *   0x00000000001FD4D0  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x00000000001FFD00  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 130
 *   insn=0x000000000046C56C string=0x000000000046C570 "h"
 *   insn=0x000000000046C580 string=0x000000000046C584 "4"
 *   insn=0x000000000046C588 string=0x000000000046C58C ""
 *   insn=0x000000000046C598 string=0x000000000046C59C "\t@"
 *   insn=0x000000000046C5A8 string=0x000000000046C5AC ""
 *   insn=0x000000000046C5B8 string=0x000000000046C5BC "@"
 *   insn=0x000000000046C5E0 string=0x000000000046C5E4 "_""
 *   insn=0x000000000046C5E4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046C60C string=0x000000000046C610 "5"
 *   insn=0x000000000046C614 string=0x000000000046C618 ""
 *   insn=0x000000000046C624 string=0x000000000046C628 "\t@"
 *   insn=0x000000000046C634 string=0x000000000046C638 ""
 *   insn=0x000000000046C644 string=0x000000000046C648 "@"
 *   insn=0x000000000046C658 string=0x000000000046C65C "a"
 *   insn=0x000000000046C660 string=0x000000000046C664 "?""
 *   insn=0x000000000046C66C string=0x000000000046C670 "7"
 *   insn=0x000000000046C68C string=0x000000000046C690 "X"
 *   insn=0x000000000046C690 string=0x000000000046C694 ""
 *   insn=0x000000000046C6A4 string=0x000000000046C6A8 " "
 *   insn=0x000000000046C6B4 string=0x000000000046C7F0 ""
 *   insn=0x000000000046C6C0 string=0x000000000046C6C4 ""
 *   insn=0x000000000046C6CC string=0x000000000046C6D0 "h"
 *   insn=0x000000000046C6D0 string=0x000000000046C6D4 ""
 *   insn=0x000000000046C6D4 string=0x000000000046C6D8 "h"
 *   insn=0x000000000046C6E8 string=0x00000000001FCAF0 "0'"
 *   insn=0x000000000046C6FC string=0x000000000046C700 "a"
 *   insn=0x000000000046C700 string=0x000000000046C70C "\n"
 *   insn=0x000000000046C708 string=0x000000000046C738 "+yj"
 *   insn=0x000000000046C70C string=0x000000000046C710 "+!"
 *   insn=0x000000000046C714 string=0x000000000046C718 "m"
 *   insn=0x000000000046C71C string=0x000000000046C720 "kA"
 *   insn=0x000000000046C728 string=0x000000000046C72C "a"
 *   insn=0x000000000046C72C string=0x000000000046C730 "_"
 *   insn=0x000000000046C738 string=0x000000000046C73C "J"
 *   insn=0x000000000046C73C string=0x000000000046C740 "_"
 *   insn=0x000000000046C75C string=0x00000000001FAFC0 "0'"
 *   insn=0x000000000046C768 string=0x000000000046C79C "3"
 *   insn=0x000000000046C774 string=0x000000000046C778 " @"
 *   insn=0x000000000046C784 string=0x000000000046C788 "RC"
 *   insn=0x000000000046C788 string=0x00000000001FD4D0 "0'"
 *   insn=0x000000000046C78C string=0x000000000046C790 "Z"
 *   insn=0x000000000046C790 string=0x000000000046C794 "_"
 *   insn=0x000000000046C79C string=0x000000000046C7A0 "h"
 *   insn=0x000000000046C7A0 string=0x000000000046C7A4 ""
 *   insn=0x000000000046C7A4 string=0x000000000046C7A8 "h"
 *   insn=0x000000000046C7AC string=0x000000000046C7B0 "h"
 *   insn=0x000000000046C7B4 string=0x000000000046C7B8 "\t@"
 *   insn=0x000000000046C7BC string=0x000000000046C7C0 "h\n@"
 *   insn=0x000000000046C7C0 string=0x000000000046C7C4 ""
 *   insn=0x000000000046C7C4 string=0x000000000046C7C8 "h\n"
 *   insn=0x000000000046C7CC string=0x000000000046C7D0 "h"
 *   insn=0x000000000046C7D4 string=0x000000000046C7D8 "@"
 *   insn=0x000000000046C7E0 string=0x000000000046C7E4 "9"
 *   insn=0x000000000046C7E4 string=0x000000000046C7E8 "?"
 *   insn=0x000000000046C81C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046C824 string=0x000000000046C834 "h"
 *   insn=0x000000000046C82C string=0x000000000046C830 "3"
 *   insn=0x000000000046C834 string=0x000000000046C838 ""
 *   insn=0x000000000046C838 string=0x000000000046C83C "h"
 *   insn=0x000000000046C840 string=0x000000000046C844 "h"
 *   insn=0x000000000046C844 string=0x000000000046C848 "\t@"
 *   insn=0x000000000046C850 string=0x000000000046C854 "h\n@"
 *   insn=0x000000000046C854 string=0x000000000046C858 ""
 *   insn=0x000000000046C858 string=0x000000000046C85C "h\n"
 *   insn=0x000000000046C860 string=0x000000000046C864 "h"
 *   insn=0x000000000046C864 string=0x000000000046C868 "@"
 *   insn=0x000000000046C898 string=0x000000000046C89C "U"
 *   insn=0x000000000046C8A8 string=0x000000000046C8AC "i"
 *   insn=0x000000000046C8AC string=0x000000000046C8B0 "K"
 *   insn=0x000000000046C8B0 string=0x000000000046C8B4 "("
 *   insn=0x000000000046C8B4 string=0x000000000046C8B8 "\n"
 *   insn=0x000000000046C8BC string=0x000000000046C8C0 "H#"
 *   insn=0x000000000046C8C0 string=0x000000000046C8C4 ""\t"
 *   insn=0x000000000046C8C0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046C8D0 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000046C924 string=0x000000000046C928 " "
 *   insn=0x000000000046C934 string=0x000000000046C938 " "
 *   insn=0x000000000046C938 string=0x000000000046C93C "\t"
 *   insn=0x000000000046C954 string=0x00000000001F70F0 "0'"
 *   insn=0x000000000046C968 string=0x000000000046C96C "aB"
 *   insn=0x000000000046C96C string=0x000000000046C970 "`"
 *   insn=0x000000000046C970 string=0x000000000046C974 "!"
 *   insn=0x000000000046C974 string=0x000000000046C978 "B"
 *   insn=0x000000000046C980 string=0x000000000046C984 "h&@)"
 *   insn=0x000000000046C988 string=0x000000000046C98C ""
 *   insn=0x000000000046C98C string=0x000000000046C990 "(y"
 *   insn=0x000000000046C98C string=0x000000000046C9AC "i"
 *   insn=0x000000000046C994 string=0x000000000046C998 "I"
 *   insn=0x000000000046C9A4 string=0x000000000046C9A8 "h"
 *   insn=0x000000000046C9B0 string=0x000000000046C9B4 "}@"
 *   insn=0x000000000046C9B4 string=0x000000000046C9B8 "("
 *   insn=0x000000000046C9BC string=0x000000000046C9C0 "M"
 *   insn=0x000000000046C9C4 string=0x000000000046C9C8 "M"
 *   insn=0x000000000046C9CC string=0x000000000046C9D0 "("
 *   insn=0x000000000046C9D4 string=0x000000000046C9D8 "\n"
 *   insn=0x000000000046C9D8 string=0x000000000046C9DC "4"
 *   insn=0x000000000046C9DC string=0x000000000046CA20 "h"
 *   insn=0x000000000046C9E0 string=0x000000000046C9E4 ""
 *   insn=0x000000000046C9F0 string=0x000000000046C9F4 "\t@"
 *   insn=0x000000000046CA00 string=0x000000000046CA04 ""
 *   insn=0x000000000046CA10 string=0x000000000046CA14 "@"
 *   insn=0x000000000046CA20 string=0x000000000046CA24 ""
 *   insn=0x000000000046CA24 string=0x000000000046CA28 "h"
 *   insn=0x000000000046CA2C string=0x000000000046CA30 "3"
 *   insn=0x000000000046CA30 string=0x000000000046CA34 "h"
 *   insn=0x000000000046CA34 string=0x000000000046CA38 ""
 *   insn=0x000000000046CA38 string=0x000000000046CA3C "h"
 *   insn=0x000000000046CA40 string=0x000000000046CA44 "h"
 *   insn=0x000000000046CA48 string=0x000000000046CA4C "\t@"
 *   insn=0x000000000046CA50 string=0x000000000046CA54 "h\n@"
 *   insn=0x000000000046CA54 string=0x000000000046CA58 ""
 *   insn=0x000000000046CA58 string=0x000000000046CA5C "h\n"
 *   insn=0x000000000046CA60 string=0x000000000046CA64 "h"
 *   insn=0x000000000046CA68 string=0x000000000046CA6C "@"
 *   insn=0x000000000046CAA8 string=0x000000000046CAAC "4"
 *   insn=0x000000000046CAB0 string=0x000000000046CAB4 ""
 *   insn=0x000000000046CAC0 string=0x000000000046CAC4 "\t@"
 *   insn=0x000000000046CAD0 string=0x000000000046CAD4 ""
 *   insn=0x000000000046CAE0 string=0x000000000046CAE4 "@"
 *   insn=0x000000000046CAF0 string=0x000000000046CAF4 "tS"
 *   insn=0x000000000046CAF8 string=0x000000000046CAFC ""
 *   insn=0x000000000046CAFC string=0x000000000046CB00 "\t"
 *   insn=0x000000000046CB04 string=0x000000000046CB08 "k"
 *   insn=0x000000000046CB08 string=0x000000000046CB34 "("
 *   insn=0x000000000046CB10 string=0x000000000046CB14 "`"
 *   insn=0x000000000046CB18 string=0x000000000046CB1C "   "
 *   insn=0x000000000046CB20 string=0x000000000046CB24 "J"
 *   insn=0x000000000046CB24 string=0x000000000046CB28 "_"
 *   insn=0x000000000046CB28 string=0x000000000046CB2C "kA"
 *   insn=0x000000000046CB2C string=0x000000000046CB30 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector(__int64 a1)
{
  __int64 v1; // x22
  __int64 v2; // x8
  __int64 v3; // x23
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 - 8);
    if ( v2 )
    {
      v3 = 16 * v2;
      do
      {
        v4 = *(_QWORD **)(v1 + v3 - 8);
        if ( v4 )
        {
          v5 = v4[1] - 1LL;
          v4[1] = v5;
          if ( !v5 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
            v6 = v4[2] - 1LL;
            v4[2] = v6;
            if ( !v6 )
              (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
          }
        }
        v3 -= 16;
      }
      while ( v3 );
    }
    operator delete[]((void *)(v1 - 8));
  }
}

