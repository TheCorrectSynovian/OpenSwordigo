/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D4B44
 * Mangled: _ZN5Caver15GameOverlayView27UpdateSwingButtonVisibilityEv
 * Demangled: Caver::GameOverlayView::UpdateSwingButtonVisibility(void)
 *
 * Callers: 1
 *   0x0000000000201720  Caver::GameOverlayView::UpdateSwingButtonVisibility(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA110  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *
 * Referenced strings: 24
 *   insn=0x00000000003D4B50 string=0x00000000003D4B54 "T"
 *   insn=0x00000000003D4B5C string=0x00000000003D4B60 ""
 *   insn=0x00000000003D4B64 string=0x00000000003D4B68 "h"
 *   insn=0x00000000003D4B68 string=0x00000000003D4B6C ""
 *   insn=0x00000000003D4B6C string=0x00000000003D4B70 "h"
 *   insn=0x00000000003D4B70 string=0x00000000003D4B9C "|@"
 *   insn=0x00000000003D4B74 string=0x00000000003D4B78 "h"
 *   insn=0x00000000003D4B84 string=0x00000000003D4B88 "!"
 *   insn=0x00000000003D4BA8 string=0x00000000003D4BAC "Y"
 *   insn=0x00000000003D4BAC string=0x00000000001FA110 "0'"
 *   insn=0x00000000003D4BB8 string=0x00000000003D4BBC "h"
 *   insn=0x00000000003D4BC4 string=0x00000000003D4BC8 "h"
 *   insn=0x00000000003D4BC8 string=0x00000000003D4BCC ""
 *   insn=0x00000000003D4BCC string=0x00000000003D4BD0 "h"
 *   insn=0x00000000003D4BD0 string=0x00000000003D4BD4 "A"
 *   insn=0x00000000003D4BD4 string=0x00000000003D4BD8 "h"
 *   insn=0x00000000003D4BDC string=0x00000000003D4BE0 "\t@"
 *   insn=0x00000000003D4BE4 string=0x00000000003D4BE8 "h\n@"
 *   insn=0x00000000003D4BE8 string=0x00000000003D4BEC ""
 *   insn=0x00000000003D4BEC string=0x00000000003D4BF0 "h\n"
 *   insn=0x00000000003D4BF0 string=0x00000000003D4BF4 "A"
 *   insn=0x00000000003D4BF4 string=0x00000000003D4BF8 "h"
 *   insn=0x00000000003D4BFC string=0x00000000003D4C00 "@"
 *   insn=0x00000000003D4C0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::UpdateSwingButtonVisibility(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8
  __int64 v4; // [xsp+8h] [xbp-28h]
  _QWORD *v5; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD *)(this + 368);
  if ( *(_BYTE *)(this + 416) || *(_BYTE *)(this + 417) )
  {
    *(_BYTE *)(v1 + 228) = 1;
  }
  else
  {
    this = Caver::CharacterState::AnyItemOfType();
    *(_BYTE *)(v1 + 228) = v4 == 0;
    if ( v5 )
    {
      v2 = v5[1] - 1LL;
      v5[1] = v2;
      if ( !v2 )
      {
        this = (*(__int64 (__fastcall **)())(*v5 + 16LL))();
        v3 = v5[2] - 1LL;
        v5[2] = v3;
        if ( !v3 )
          return (*(__int64 (__fastcall **)())(*v5 + 24LL))();
      }
    }
  }
  return this;
}

