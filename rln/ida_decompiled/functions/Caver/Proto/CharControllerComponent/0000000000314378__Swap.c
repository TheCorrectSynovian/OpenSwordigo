/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314378
 * Mangled: _ZN5Caver5Proto23CharControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::CharControllerComponent::Swap(Caver::Proto::CharControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 105
 *   insn=0x0000000000314380 string=0x0000000000314384 "H"
 *   insn=0x0000000000314384 string=0x0000000000314388 "\t"
 *   insn=0x0000000000314388 string=0x000000000031438C "?"
 *   insn=0x0000000000314394 string=0x0000000000314398 ")"
 *   insn=0x0000000000314394 string=0x0000000000314534 ""
 *   insn=0x0000000000314398 string=0x000000000031439C "\n"
 *   insn=0x000000000031439C string=0x00000000003143A0 "\t"
 *   insn=0x00000000003143A0 string=0x00000000003143A4 "*"
 *   insn=0x00000000003143A4 string=0x00000000003143A8 ")"
 *   insn=0x00000000003143A8 string=0x00000000003143AC "\n"
 *   insn=0x00000000003143AC string=0x00000000003143B0 "\t"
 *   insn=0x00000000003143B0 string=0x00000000003143B4 "*"
 *   insn=0x00000000003143B4 string=0x00000000003143B8 ")"
 *   insn=0x00000000003143B8 string=0x00000000003143BC "\n"
 *   insn=0x00000000003143BC string=0x00000000003143C0 "\t"
 *   insn=0x00000000003143C0 string=0x00000000003143C4 "*"
 *   insn=0x00000000003143C4 string=0x00000000003143C8 ")"
 *   insn=0x00000000003143C8 string=0x00000000003143CC "\n"
 *   insn=0x00000000003143CC string=0x00000000003143D0 "\t"
 *   insn=0x00000000003143D0 string=0x00000000003143D4 "*"
 *   insn=0x00000000003143D4 string=0x00000000003143D8 ")"
 *   insn=0x00000000003143D8 string=0x00000000003143DC "\n"
 *   insn=0x00000000003143DC string=0x00000000003143E0 "\t"
 *   insn=0x00000000003143E0 string=0x00000000003143E4 "*"
 *   insn=0x00000000003143E4 string=0x00000000003143E8 ") @"
 *   insn=0x00000000003143E8 string=0x00000000003143EC "\n @"
 *   insn=0x00000000003143EC string=0x00000000003143F0 "\t "
 *   insn=0x00000000003143F0 string=0x00000000003143F4 "* "
 *   insn=0x00000000003143F4 string=0x00000000003143F8 ")$@"
 *   insn=0x00000000003143F8 string=0x00000000003143FC "\n$@"
 *   insn=0x00000000003143FC string=0x0000000000314400 "\t$"
 *   insn=0x0000000000314400 string=0x0000000000314404 "*$"
 *   insn=0x0000000000314404 string=0x0000000000314408 ")(@"
 *   insn=0x0000000000314408 string=0x000000000031440C "\n(@"
 *   insn=0x000000000031440C string=0x0000000000314410 "\t("
 *   insn=0x0000000000314410 string=0x0000000000314414 "*("
 *   insn=0x0000000000314414 string=0x0000000000314418 "),@"
 *   insn=0x0000000000314418 string=0x000000000031441C "\n,@"
 *   insn=0x000000000031441C string=0x0000000000314420 "\t,"
 *   insn=0x0000000000314420 string=0x0000000000314424 "*,"
 *   insn=0x0000000000314424 string=0x0000000000314428 ")0@"
 *   insn=0x0000000000314428 string=0x000000000031442C "\n0@"
 *   insn=0x000000000031442C string=0x0000000000314430 "\t0"
 *   insn=0x0000000000314430 string=0x0000000000314434 "*0"
 *   insn=0x0000000000314434 string=0x0000000000314438 ")4@"
 *   insn=0x0000000000314438 string=0x000000000031443C "\n4@"
 *   insn=0x000000000031443C string=0x0000000000314440 "\t4"
 *   insn=0x0000000000314440 string=0x0000000000314444 "*4"
 *   insn=0x0000000000314444 string=0x0000000000314448 ")8@"
 *   insn=0x0000000000314448 string=0x000000000031444C "\n8@"
 *   insn=0x000000000031444C string=0x0000000000314450 "\t8"
 *   insn=0x0000000000314450 string=0x0000000000314454 "*8"
 *   insn=0x0000000000314454 string=0x0000000000314458 ")<@"
 *   insn=0x0000000000314458 string=0x000000000031445C "\n<@"
 *   insn=0x000000000031445C string=0x0000000000314460 "\t<"
 *   insn=0x0000000000314460 string=0x0000000000314464 "*<"
 *   insn=0x0000000000314464 string=0x0000000000314468 ")@@"
 *   insn=0x0000000000314468 string=0x000000000031446C "\n@@"
 *   insn=0x000000000031446C string=0x0000000000314470 "\t@"
 *   insn=0x0000000000314470 string=0x0000000000314474 "*@"
 *   insn=0x0000000000314478 string=0x000000000031447C "\t$@"
 *   insn=0x000000000031447C string=0x0000000000314480 "\n,J)"
 *   insn=0x0000000000314484 string=0x0000000000314488 ",$@"
 *   insn=0x000000000031448C string=0x0000000000314490 ",P@"
 *   insn=0x0000000000314494 string=0x0000000000314498 ",T@"
 *   insn=0x000000000031449C string=0x00000000003144A0 " "
 *   insn=0x00000000003144A4 string=0x00000000003144A8 ")$"
 *   insn=0x00000000003144A8 string=0x00000000003144AC "*,\n)"
 *   insn=0x00000000003144B0 string=0x00000000003144B4 "*`"
 *   insn=0x00000000003144B4 string=0x00000000003144B8 " "
 *   insn=0x00000000003144B8 string=0x00000000003144BC "$@"
 *   insn=0x00000000003144C0 string=0x00000000003144C4 "`"
 *   insn=0x00000000003144C4 string=0x00000000003144C8 "@"
 *   insn=0x00000000003144C8 string=0x00000000003144CC "?"
 *   insn=0x00000000003144C8 string=0x0000000000314550 "$"
 *   insn=0x00000000003144D0 string=0x00000000003144D4 ")h@"
 *   insn=0x00000000003144D0 string=0x0000000000314560 "*$"
 *   insn=0x00000000003144D4 string=0x00000000003144D8 "\nh@"
 *   insn=0x00000000003144D8 string=0x00000000003144DC "\th"
 *   insn=0x00000000003144DC string=0x00000000003144E0 "*h"
 *   insn=0x00000000003144E0 string=0x00000000003144E4 ")l@"
 *   insn=0x00000000003144E4 string=0x00000000003144E8 "\nl@"
 *   insn=0x00000000003144E8 string=0x00000000003144EC "\tl"
 *   insn=0x00000000003144EC string=0x00000000003144F0 "*l"
 *   insn=0x00000000003144F0 string=0x00000000003144F4 ")p@"
 *   insn=0x00000000003144F4 string=0x00000000003144F8 "\np@"
 *   insn=0x00000000003144F8 string=0x00000000003144FC "\tp"
 *   insn=0x00000000003144FC string=0x0000000000314500 "*p"
 *   insn=0x0000000000314500 string=0x0000000000314504 ")t@"
 *   insn=0x0000000000314504 string=0x0000000000314508 "\nt@"
 *   insn=0x0000000000314508 string=0x000000000031450C "\tt"
 *   insn=0x000000000031450C string=0x0000000000314510 "*t"
 *   insn=0x0000000000314510 string=0x0000000000314514 ")<@"
 *   insn=0x0000000000314514 string=0x0000000000314518 "\n<@"
 *   insn=0x0000000000314518 string=0x000000000031451C "\t<"
 *   insn=0x000000000031451C string=0x0000000000314520 "*<"
 *   insn=0x0000000000314520 string=0x0000000000314524 ")@"
 *   insn=0x0000000000314524 string=0x0000000000314528 "\n@"
 *   insn=0x0000000000314528 string=0x000000000031452C "\t"
 *   insn=0x000000000031452C string=0x0000000000314530 "*"
 *   insn=0x000000000031453C string=0x0000000000314540 "A"
 *   insn=0x0000000000314540 string=0x0000000000314568 "Z"
 *   insn=0x0000000000314550 string=0x0000000000314554 ")$@"
 *   insn=0x0000000000314554 string=0x0000000000314558 "?"
 *   insn=0x0000000000314568 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::Swap(__int64 this, Caver::Proto::CharControllerComponent *a2)
{
  int v2; // w10
  int v3; // w10
  int v4; // w10
  int v5; // w10
  int v6; // w10
  int v7; // w10
  int v8; // w10
  int v9; // w10
  int v10; // w10
  int v11; // w10
  int v12; // w10
  int v13; // w10
  int v14; // w10
  int v15; // w10
  __int64 v16; // x9
  int v17; // w10
  int v18; // w11
  __int64 v19; // x11
  int v20; // w10
  int v21; // w10
  int v22; // w10
  int v23; // w10
  __int64 v24; // x10
  __int128 v25; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != (Caver::Proto::CharControllerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v6;
    v7 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v7;
    v8 = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v8;
    v9 = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v9;
    v10 = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v10;
    v11 = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v11;
    v12 = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 52) = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v12;
    v13 = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v13;
    v14 = *(_DWORD *)(this + 60);
    *(_DWORD *)(this + 60) = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 15) = v14;
    v15 = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
    *((_DWORD *)a2 + 16) = v15;
    v16 = *(_QWORD *)(this + 72);
    v17 = *(_DWORD *)(this + 80);
    v18 = *(_DWORD *)(this + 84);
    v25 = *(_OWORD *)(this + 88);
    *(_QWORD *)(this + 72) = *((_QWORD *)a2 + 9);
    *(_DWORD *)(this + 80) = *((_DWORD *)a2 + 20);
    *(_DWORD *)(this + 84) = *((_DWORD *)a2 + 21);
    *(_OWORD *)(this + 88) = *(_OWORD *)((char *)a2 + 88);
    *((_QWORD *)a2 + 9) = v16;
    *((_DWORD *)a2 + 20) = v17;
    *((_DWORD *)a2 + 21) = v18;
    *(_OWORD *)((char *)a2 + 88) = v25;
    v19 = this + 88;
    if ( *(Caver::Proto::CharControllerComponent **)(this + 72) == (Caver::Proto::CharControllerComponent *)((char *)a2 + 88) )
    {
      *(_QWORD *)(this + 72) = v19;
      if ( *((_QWORD *)a2 + 9) != v19 )
        goto LABEL_4;
    }
    else if ( v16 != v19 )
    {
LABEL_4:
      v20 = *(_DWORD *)(this + 104);
      *(_DWORD *)(this + 104) = *((_DWORD *)a2 + 26);
      *((_DWORD *)a2 + 26) = v20;
      v21 = *(_DWORD *)(this + 108);
      *(_DWORD *)(this + 108) = *((_DWORD *)a2 + 27);
      *((_DWORD *)a2 + 27) = v21;
      v22 = *(_DWORD *)(this + 112);
      *(_DWORD *)(this + 112) = *((_DWORD *)a2 + 28);
      *((_DWORD *)a2 + 28) = v22;
      v23 = *(_DWORD *)(this + 116);
      *(_DWORD *)(this + 116) = *((_DWORD *)a2 + 29);
      *((_DWORD *)a2 + 29) = v23;
      v24 = *(_QWORD *)(this + 120);
      *(_QWORD *)(this + 120) = *((_QWORD *)a2 + 15);
      *((_QWORD *)a2 + 15) = v24;
      LODWORD(v24) = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 2) = v24;
      return this;
    }
    *((_QWORD *)a2 + 9) = (char *)a2 + 88;
    goto LABEL_4;
  }
  return this;
}

