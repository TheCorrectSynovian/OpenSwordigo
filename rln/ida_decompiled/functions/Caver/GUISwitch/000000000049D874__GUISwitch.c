/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D874
 * Mangled: _ZN5Caver9GUISwitchC2Ev
 * Demangled: Caver::GUISwitch::GUISwitch(void)
 *
 * Callers: 2
 *   0x00000000001FB2D0  Caver::GUISwitch::GUISwitch(void)
 *   0x000000000049D6A4  Caver::GUISlider::~GUISlider()
 *
 * Callees: 13
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 87
 *   insn=0x000000000049D888 string=0x000000000049D88C "X"
 *   insn=0x000000000049D88C string=0x000000000049D890 ""
 *   insn=0x000000000049D8A0 string=0x000000000049D8A4 "J"
 *   insn=0x000000000049D8A4 string=0x000000000049D8A8 "J"
 *   insn=0x000000000049D8B0 string=0x000000000049D8B4 "h""
 *   insn=0x000000000049D8B4 string=0x000000000049D8B8 " "
 *   insn=0x000000000049D8BC string=0x000000000049D8C0 "i"
 *   insn=0x000000000049D8C0 string=0x000000000049D8C4 "IA"
 *   insn=0x000000000049D8C4 string=0x000000000049D8C8 "i"
 *   insn=0x000000000049D8C8 string=0x000000000049D8CC "W"
 *   insn=0x000000000049D8D0 string=0x000000000049D8D4 "h"
 *   insn=0x000000000049D8D4 string=0x000000000049D8D8 "v"
 *   insn=0x000000000049D8EC string=0x000000000049D8F0 "h~"
 *   insn=0x000000000049D8F4 string=0x000000000049D8F8 ":_"
 *   insn=0x000000000049D8F8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049D904 string=0x00000000001F7430 "0'"
 *   insn=0x000000000049D910 string=0x000000000049D914 "h"
 *   insn=0x000000000049D910 string=0x00000000001F5420 "P'"
 *   insn=0x000000000049D920 string=0x000000000049D924 "i"
 *   insn=0x000000000049D928 string=0x000000000049D92C "4"
 *   insn=0x000000000049D92C string=0x000000000049D970 "h"
 *   insn=0x000000000049D930 string=0x000000000049D934 ""
 *   insn=0x000000000049D940 string=0x000000000049D944 "\t@"
 *   insn=0x000000000049D950 string=0x000000000049D954 ""
 *   insn=0x000000000049D960 string=0x000000000049D964 "@"
 *   insn=0x000000000049D970 string=0x000000000049D974 "i"
 *   insn=0x000000000049D974 string=0x000000000049D978 "1@"
 *   insn=0x000000000049D97C string=0x000000000049D980 "i"
 *   insn=0x000000000049D988 string=0x000000000049D98C "*"
 *   insn=0x000000000049D98C string=0x000000000049D990 "J"
 *   insn=0x000000000049D990 string=0x000000000049D994 "*"
 *   insn=0x000000000049D9A4 string=0x000000000049D9A8 "4"
 *   insn=0x000000000049D9A8 string=0x000000000049D9EC ""
 *   insn=0x000000000049D9AC string=0x000000000049D9B0 ""
 *   insn=0x000000000049D9BC string=0x000000000049D9C0 "\t@"
 *   insn=0x000000000049D9CC string=0x000000000049D9D0 ""
 *   insn=0x000000000049D9DC string=0x000000000049D9E0 "@"
 *   insn=0x000000000049D9F8 string=0x000000000049DA14 "/b"
 *   insn=0x000000000049DA14 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049DA24 string=0x000000000049DA80 "h"
 *   insn=0x000000000049DA28 string=0x000000000049DA2C ""
 *   insn=0x000000000049DA30 string=0x000000000049DA34 "a"
 *   insn=0x000000000049DA38 string=0x000000000049DA3C "\t@"
 *   insn=0x000000000049DA48 string=0x000000000049DA4C ""
 *   insn=0x000000000049DA50 string=0x000000000049DA54 "a"
 *   insn=0x000000000049DA58 string=0x000000000049DA5C "@"
 *   insn=0x000000000049DA74 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049DA8C string=0x000000000049DA90 ")"
 *   insn=0x000000000049DA8C string=0x000000000049DAC0 "u"
 *   insn=0x000000000049DA90 string=0x000000000049DA94 ")=G"
 *   insn=0x000000000049DA94 string=0x000000000049DA98 "!"
 *   insn=0x000000000049DA98 string=0x000000000049DA9C ")"
 *   insn=0x000000000049DA9C string=0x000000000049DAA0 "\t"
 *   insn=0x000000000049DA9C string=0x000000000049DB60 "\t"
 *   insn=0x000000000049DAA0 string=0x000000000049DAA4 "*"
 *   insn=0x000000000049DAA4 string=0x000000000049DAA8 "\n"
 *   insn=0x000000000049DAAC string=0x000000000049DAB0 "?"
 *   insn=0x000000000049DAB0 string=0x000000000049DAB4 "l"
 *   insn=0x000000000049DAB8 string=0x000000000049DABC ":2"
 *   insn=0x000000000049DAC0 string=0x000000000049DAC4 "5"
 *   insn=0x000000000049DAC4 string=0x000000000049DB08 "`"
 *   insn=0x000000000049DAC8 string=0x000000000049DACC ""
 *   insn=0x000000000049DAD8 string=0x000000000049DADC "\t@"
 *   insn=0x000000000049DAE8 string=0x000000000049DAEC ""
 *   insn=0x000000000049DAF8 string=0x000000000049DAFC "@"
 *   insn=0x000000000049DB0C string=0x000000000049DB10 "@"
 *   insn=0x000000000049DB10 string=0x000000000049DB14 ""
 *   insn=0x000000000049DB14 string=0x000000000049DB18 ""
 *   insn=0x000000000049DB1C string=0x000000000049DB20 ""
 *   insn=0x000000000049DB20 string=0x000000000049DB24 ""
 *   insn=0x000000000049DB30 string=0x000000000049DB34 "@"
 *   insn=0x000000000049DB34 string=0x000000000049DB38 ""
 *   insn=0x000000000049DB38 string=0x000000000049DB3C ""
 *   insn=0x000000000049DB40 string=0x000000000049DB44 ""
 *   insn=0x000000000049DB44 string=0x000000000049DB48 ""
 *   insn=0x000000000049DB54 string=0x00000000001F4DB0 "P'"
 *   insn=0x000000000049DB58 string=0x000000000049DB5C "Z"
 *   insn=0x000000000049DB60 string=0x000000000049DB64 "*"
 *   insn=0x000000000049DB64 string=0x000000000049DB68 "\n"
 *   insn=0x000000000049DB68 string=0x000000000049DB6C "?"
 *   insn=0x000000000049DB6C string=0x000000000049DB70 "M"
 *   insn=0x000000000049DB88 string=0x000000000049DB8C "In"
 *   insn=0x000000000049DB8C string=0x000000000049DB90 "`"
 *   insn=0x000000000049DB8C string=0x00000000001F94B0 "0'"
 *   insn=0x000000000049DB94 string=0x000000000049DB98 "a"
 *   insn=0x000000000049DB9C string=0x000000000049DBA0 "tu"
 *   insn=0x000000000049DBA0 string=0x00000000001FB170 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::GUISwitch(Caver::GUISwitch *this)
{
  Caver::GUIFrameView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x9
  _QWORD *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 (__fastcall *v8)(Caver::GUISwitch *, __int64 *); // x8
  _QWORD *v9; // x9
  __int64 result; // x0
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v15; // [xsp+28h] [xbp-48h]
  __int64 v16; // [xsp+38h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 35) = 0;
  *(_OWORD *)((char *)this + 248) = 0u;
  *(_OWORD *)((char *)this + 264) = 0u;
  *((_QWORD *)this + 33) = (char *)this + 248;
  *((_QWORD *)this + 34) = (char *)this + 248;
  *(_QWORD *)this = off_6D6660;
  *((_DWORD *)this + 72) = 0;
  *(_OWORD *)((char *)this + 312) = 0u;
  *((_BYTE *)this + 328) = 0;
  *(_OWORD *)((char *)this + 296) = 0u;
  *((_QWORD *)this + 42) = &byte_6FD2F8;
  *((_QWORD *)this + 43) = 0;
  v2 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v2);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v3 = (_QWORD *)*((_QWORD *)this + 40);
  v4 = v14;
  v14 = *((_QWORD *)this + 39);
  v5 = v15;
  *((_QWORD *)this + 39) = v4;
  *((_QWORD *)this + 40) = v5;
  v15 = v3;
  if ( v3 )
  {
    v6 = v3[1] - 1LL;
    v3[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v7 = v3[2] - 1LL;
      v3[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v8 = *(__int64 (__fastcall **)(Caver::GUISwitch *, __int64 *))(*(_QWORD *)this + 96LL);
  v14 = *((_QWORD *)this + 39);
  v9 = (_QWORD *)*((_QWORD *)this + 40);
  v15 = v9;
  if ( v9 )
    ++v9[1];
  result = v8(this, &v14);
  v11 = v15;
  if ( v15 )
  {
    v12 = v15[1] - 1LL;
    v15[1] = v12;
    if ( !v12 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  return result;
}

