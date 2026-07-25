/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BFA8
 * Mangled: _ZN5Caver13GUIScrollView10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F4BA0  Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6C60  Caver::FWTouch::operator=(Caver::FWTouch const&)
 *   0x00000000001F9570  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x00000000002012A0  Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 103
 *   insn=0x000000000049BFB8 string=0x000000000049BFBC "V"
 *   insn=0x000000000049BFCC string=0x000000000049BFD0 "h"
 *   insn=0x000000000049BFD4 string=0x000000000049BFD8 "h"
 *   insn=0x000000000049BFE8 string=0x000000000049BFEC "U"
 *   insn=0x000000000049BFF8 string=0x000000000049BFFC "]u"
 *   insn=0x000000000049BFFC string=0x00000000001F9570 "0'"
 *   insn=0x000000000049C004 string=0x000000000049C008 "\n"
 *   insn=0x000000000049C004 string=0x000000000049C014 "u"
 *   insn=0x000000000049C008 string=0x000000000049C00C "J"
 *   insn=0x000000000049C00C string=0x000000000049C010 "\n"
 *   insn=0x000000000049C014 string=0x000000000049C018 "i""
 *   insn=0x000000000049C018 string=0x000000000049C01C "5"
 *   insn=0x000000000049C020 string=0x000000000049C024 ""
 *   insn=0x000000000049C030 string=0x000000000049C034 "\t@"
 *   insn=0x000000000049C040 string=0x000000000049C044 ""
 *   insn=0x000000000049C050 string=0x000000000049C054 "@"
 *   insn=0x000000000049C060 string=0x000000000049C064 "5"
 *   insn=0x000000000049C064 string=0x000000000049C0A8 "`"
 *   insn=0x000000000049C068 string=0x000000000049C06C ""
 *   insn=0x000000000049C07C string=0x000000000049C080 "\t@"
 *   insn=0x000000000049C088 string=0x000000000049C08C ""
 *   insn=0x000000000049C09C string=0x000000000049C0A0 "@"
 *   insn=0x000000000049C0B0 string=0x000000000049C0B4 "`"
 *   insn=0x000000000049C0B4 string=0x000000000049C0C0 "u"
 *   insn=0x000000000049C0B8 string=0x000000000049C114 ""
 *   insn=0x000000000049C0C4 string=0x000000000049C0C8 "5"
 *   insn=0x000000000049C0CC string=0x000000000049C0D0 ""
 *   insn=0x000000000049C0D8 string=0x000000000049C10C "`"
 *   insn=0x000000000049C0E0 string=0x000000000049C0E4 "\t@"
 *   insn=0x000000000049C0EC string=0x000000000049C0F0 ""
 *   insn=0x000000000049C100 string=0x000000000049C104 "@"
 *   insn=0x000000000049C118 string=0x000000000049C11C "m@"
 *   insn=0x000000000049C120 string=0x000000000049C124 ""
 *   insn=0x000000000049C124 string=0x000000000049C128 "h"
 *   insn=0x000000000049C138 string=0x000000000049C13C "h"
 *   insn=0x000000000049C140 string=0x000000000049C144 "i"
 *   insn=0x000000000049C14C string=0x000000000049C150 "i"
 *   insn=0x000000000049C150 string=0x000000000049C154 "`"
 *   insn=0x000000000049C158 string=0x000000000049C15C "("
 *   insn=0x000000000049C160 string=0x00000000001F6C60 "0'"
 *   insn=0x000000000049C174 string=0x000000000049C18C "Qh"
 *   insn=0x000000000049C18C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049C194 string=0x000000000049C198 "4"
 *   insn=0x000000000049C19C string=0x000000000049C1A0 ""
 *   insn=0x000000000049C1AC string=0x000000000049C1B0 "\t@"
 *   insn=0x000000000049C1BC string=0x000000000049C1C0 ""
 *   insn=0x000000000049C1CC string=0x000000000049C1D0 "@"
 *   insn=0x000000000049C1E0 string=0x000000000049C1E4 "Z"
 *   insn=0x000000000049C1FC string=0x000000000049C200 "U"
 *   insn=0x000000000049C214 string=0x000000000049C218 "i"
 *   insn=0x000000000049C220 string=0x000000000049C224 "`"
 *   insn=0x000000000049C224 string=0x000000000049C228 "`"
 *   insn=0x000000000049C228 string=0x000000000049C22C "h"
 *   insn=0x000000000049C228 string=0x000000000049C234 "h"
 *   insn=0x000000000049C230 string=0x000000000049C2C0 "h"
 *   insn=0x000000000049C238 string=0x000000000049C23C "i"
 *   insn=0x000000000049C23C string=0x000000000049C240 "j.A"
 *   insn=0x000000000049C244 string=0x000000000049C248 "h"
 *   insn=0x000000000049C25C string=0x000000000049C260 "ir"
 *   insn=0x000000000049C260 string=0x000000000049C264 "jv"
 *   insn=0x000000000049C26C string=0x000000000049C270 "i"
 *   insn=0x000000000049C270 string=0x000000000049C274 "j.A"
 *   insn=0x000000000049C274 string=0x000000000049C278 "k"
 *   insn=0x000000000049C278 string=0x000000000049C27C "h"
 *   insn=0x000000000049C27C string=0x000000000049C280 "i"
 *   insn=0x000000000049C280 string=0x000000000049C284 "j"
 *   insn=0x000000000049C290 string=0x000000000049C294 "Cb"
 *   insn=0x000000000049C294 string=0x00000000001F4BA0 "P'"
 *   insn=0x000000000049C2C0 string=0x000000000049C2C4 ""
 *   insn=0x000000000049C2C4 string=0x000000000049C2E4 "h"
 *   insn=0x000000000049C2C8 string=0x000000000049C2CC "h"
 *   insn=0x000000000049C2CC string=0x000000000049C2D0 ""
 *   insn=0x000000000049C2D4 string=0x000000000049C2D8 ""
 *   insn=0x000000000049C2E8 string=0x000000000049C2EC "h"
 *   insn=0x000000000049C2EC string=0x000000000049C2F0 "`"
 *   insn=0x000000000049C2EC string=0x00000000005883D0 "\n"
 *   insn=0x000000000049C2F0 string=0x000000000049C2F4 "\t"
 *   insn=0x000000000049C2F4 string=0x000000000049C2F8 "a"
 *   insn=0x000000000049C300 string=0x000000000049C304 "   "
 *   insn=0x000000000049C304 string=0x000000000049C308 "m"
 *   insn=0x000000000049C308 string=0x000000000049C334 "`"
 *   insn=0x000000000049C31C string=0x000000000049C320 "a"
 *   insn=0x000000000049C32C string=0x000000000049C330 "h!"
 *   insn=0x000000000049C334 string=0x000000000049C338 "a"
 *   insn=0x000000000049C33C string=0x000000000049C340 "   "
 *   insn=0x000000000049C340 string=0x000000000049C344 "m"
 *   insn=0x000000000049C350 string=0x000000000049C354 "{"
 *   insn=0x000000000049C358 string=0x000000000049C35C "a"
 *   insn=0x000000000049C368 string=0x000000000049C36C "L("
 *   insn=0x000000000049C374 string=0x000000000049C378 ""
 *   insn=0x000000000049C378 string=0x000000000049C37C "h"
 *   insn=0x000000000049C37C string=0x000000000049C380 "("
 *   insn=0x000000000049C380 string=0x000000000049C384 "`"
 *   insn=0x000000000049C380 string=0x000000000049C3A4 "t"
 *   insn=0x000000000049C384 string=0x000000000049C388 "v"
 *   insn=0x000000000049C390 string=0x000000000049C394 ""
 *   insn=0x000000000049C394 string=0x000000000049C398 "@"
 *   insn=0x000000000049C39C string=0x000000000049C3A0 "v"
 *   insn=0x000000000049C3A8 string=0x000000000049C3AC "t"
 *   insn=0x000000000049C3B0 string=0x000000000049C3B4 ""
 *   insn=0x000000000049C3C4 string=0x000000000049C3C8 "\t@"
 *   insn=0x000000000049C3D0 string=0x000000000049C3D4 ""
 *   insn=0x000000000049C3E4 string=0x000000000049C3E8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const Caver::GUIView *__fastcall Caver::GUIScrollView::TouchBegan(const Caver::GUIView *this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  _QWORD *v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x0
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // [xsp+60h] [xbp-40h] BYREF
  __int64 v17; // [xsp+68h] [xbp-38h] BYREF
  _QWORD *v18; // [xsp+70h] [xbp-30h]
  __int64 v19; // [xsp+78h] [xbp-28h]

  v2 = (__int64)this;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 433) )
  {
    if ( *((_BYTE *)this + 434) )
    {
      Caver::FWTouch::LocationInView(&v16, a2, this);
      Caver::GUIView::HitTest(&v17, (Caver::GUIView *)v2, (const Caver::Vector2 *)&v16);
      v5 = v17;
      v4 = v18;
      if ( v18 )
        ++v18[1];
      v6 = *(_QWORD **)(v2 + 424);
      *(_QWORD *)(v2 + 416) = v5;
      *(_QWORD *)(v2 + 424) = v4;
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
      v9 = v18;
      if ( v18 )
      {
        v10 = v18[1] - 1LL;
        v18[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v12 = *(_QWORD *)(v2 + 416);
      *(_BYTE *)(v2 + 432) = 0;
      if ( v12 == v2 )
      {
        v13 = *(_QWORD **)(v2 + 424);
        *(_QWORD *)(v2 + 416) = 0;
        *(_QWORD *)(v2 + 424) = 0;
        if ( !v13 )
          goto LABEL_22;
        v14 = v13[1] - 1LL;
        v13[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
        v12 = *(_QWORD *)(v2 + 416);
        if ( !v12 )
          goto LABEL_22;
      }
      else if ( !v12 )
      {
        goto LABEL_22;
      }
      *(_BYTE *)(v2 + 435) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 216LL))(v12, v12) & 1;
    }
LABEL_22:
    *(_QWORD *)(v2 + 344) = *(_QWORD *)a2;
    *(_WORD *)(v2 + 354) = 1;
    Caver::FWTouch::LocationInView(&v17, a2, (const Caver::GUIView *)v2);
    *(_QWORD *)(v2 + 484) = v17;
    this = (const Caver::GUIView *)Caver::FWTouch::operator=();
    *(_DWORD *)(v2 + 480) = 0;
  }
  return this;
}

