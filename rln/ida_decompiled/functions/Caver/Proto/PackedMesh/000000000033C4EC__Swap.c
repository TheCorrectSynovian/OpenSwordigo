/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C4EC
 * Mangled: _ZN5Caver5Proto10PackedMesh4SwapEPS1_
 * Demangled: Caver::Proto::PackedMesh::Swap(Caver::Proto::PackedMesh*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 68
 *   insn=0x000000000033C4F4 string=0x000000000033C4F8 "H"
 *   insn=0x000000000033C4F8 string=0x000000000033C4FC "\t"
 *   insn=0x000000000033C4FC string=0x000000000033C500 "?"
 *   insn=0x000000000033C508 string=0x000000000033C620 ""
 *   insn=0x000000000033C50C string=0x000000000033C510 "\t(A"
 *   insn=0x000000000033C514 string=0x000000000033C518 "+@"
 *   insn=0x000000000033C518 string=0x000000000033C51C ""
 *   insn=0x000000000033C51C string=0x000000000033C520 "+"
 *   insn=0x000000000033C520 string=0x000000000033C524 ""
 *   insn=0x000000000033C524 string=0x000000000033C528 " "
 *   insn=0x000000000033C52C string=0x000000000033C530 ")("
 *   insn=0x000000000033C534 string=0x000000000033C538 "*"
 *   insn=0x000000000033C538 string=0x000000000033C53C " "
 *   insn=0x000000000033C53C string=0x000000000033C540 "@"
 *   insn=0x000000000033C544 string=0x000000000033C548 ""
 *   insn=0x000000000033C54C string=0x000000000033C550 "?"
 *   insn=0x000000000033C54C string=0x000000000033C63C ""
 *   insn=0x000000000033C554 string=0x000000000033C64C "*"
 *   insn=0x000000000033C558 string=0x000000000033C55C "\t"
 *   insn=0x000000000033C560 string=0x000000000033C564 "+"
 *   insn=0x000000000033C564 string=0x000000000033C568 ""
 *   insn=0x000000000033C568 string=0x000000000033C56C "+ @"
 *   insn=0x000000000033C56C string=0x000000000033C570 " "
 *   insn=0x000000000033C570 string=0x000000000033C574 " "
 *   insn=0x000000000033C578 string=0x000000000033C57C ")"
 *   insn=0x000000000033C580 string=0x000000000033C584 "* "
 *   insn=0x000000000033C584 string=0x000000000033C588 " "
 *   insn=0x000000000033C588 string=0x000000000033C58C ""
 *   insn=0x000000000033C590 string=0x000000000033C594 " "
 *   insn=0x000000000033C598 string=0x000000000033C59C "?"
 *   insn=0x000000000033C598 string=0x000000000033C654 ""
 *   insn=0x000000000033C59C string=0x000000000033C5A0 " "
 *   insn=0x000000000033C5A0 string=0x000000000033C664 "*"
 *   insn=0x000000000033C5A4 string=0x000000000033C5A8 "\t(F"
 *   insn=0x000000000033C5AC string=0x000000000033C5B0 "+0@"
 *   insn=0x000000000033C5B0 string=0x000000000033C5B4 "0"
 *   insn=0x000000000033C5B4 string=0x000000000033C5B8 "+4@"
 *   insn=0x000000000033C5B8 string=0x000000000033C5BC "4"
 *   insn=0x000000000033C5BC string=0x000000000033C5C0 " "
 *   insn=0x000000000033C5C4 string=0x000000000033C5C8 ")("
 *   insn=0x000000000033C5CC string=0x000000000033C5D0 "*"
 *   insn=0x000000000033C5D0 string=0x000000000033C5D4 " "
 *   insn=0x000000000033C5D4 string=0x000000000033C5D8 "0@"
 *   insn=0x000000000033C5DC string=0x000000000033C5E0 ""
 *   insn=0x000000000033C5E0 string=0x000000000033C5E4 "@"
 *   insn=0x000000000033C5E4 string=0x000000000033C5E8 "?"
 *   insn=0x000000000033C5E4 string=0x000000000033C66C "0"
 *   insn=0x000000000033C5EC string=0x000000000033C5F0 ")D@"
 *   insn=0x000000000033C5EC string=0x000000000033C67C "*0"
 *   insn=0x000000000033C5F0 string=0x000000000033C5F4 "\nD@"
 *   insn=0x000000000033C5F4 string=0x000000000033C5F8 "\tD"
 *   insn=0x000000000033C5F8 string=0x000000000033C5FC "*D"
 *   insn=0x000000000033C5FC string=0x000000000033C600 ")"
 *   insn=0x000000000033C600 string=0x000000000033C604 "\n"
 *   insn=0x000000000033C604 string=0x000000000033C608 "\t"
 *   insn=0x000000000033C608 string=0x000000000033C60C "*"
 *   insn=0x000000000033C60C string=0x000000000033C610 ")@"
 *   insn=0x000000000033C610 string=0x000000000033C614 "\n@"
 *   insn=0x000000000033C614 string=0x000000000033C618 "\t"
 *   insn=0x000000000033C618 string=0x000000000033C61C "*"
 *   insn=0x000000000033C63C string=0x000000000033C640 ")@"
 *   insn=0x000000000033C640 string=0x000000000033C644 "?"
 *   insn=0x000000000033C654 string=0x000000000033C658 ")"
 *   insn=0x000000000033C658 string=0x000000000033C65C "?"
 *   insn=0x000000000033C65C string=0x000000000033C660 "!"
 *   insn=0x000000000033C66C string=0x000000000033C670 ")0@"
 *   insn=0x000000000033C670 string=0x000000000033C674 "?"
 *   insn=0x000000000033C684 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::Swap(__int64 this, Caver::Proto::PackedMesh *a2)
{
  __int64 v2; // x9
  __int64 v3; // x10
  __int64 v4; // x11
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // x9
  __int64 v9; // x10
  __int64 v10; // x11
  __int64 v11; // x10
  __int128 v12; // [xsp+0h] [xbp-20h]
  __int128 v13; // [xsp+0h] [xbp-20h]
  __int128 v14; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != (Caver::Proto::PackedMesh *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    v3 = *(_QWORD *)(this + 24);
    v12 = *(_OWORD *)(this + 32);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *(_OWORD *)(this + 32) = *((_OWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    *((_QWORD *)a2 + 3) = v3;
    *((_OWORD *)a2 + 2) = v12;
    v4 = this + 32;
    if ( *(Caver::Proto::PackedMesh **)(this + 16) == (Caver::Proto::PackedMesh *)((char *)a2 + 32) )
    {
      *(_QWORD *)(this + 16) = v4;
      if ( *((_QWORD *)a2 + 2) != v4 )
        goto LABEL_4;
    }
    else if ( v2 != v4 )
    {
      goto LABEL_4;
    }
    *((_QWORD *)a2 + 2) = (char *)a2 + 32;
LABEL_4:
    v5 = *(_QWORD *)(this + 56);
    v6 = *(_QWORD *)(this + 64);
    v13 = *(_OWORD *)(this + 72);
    *(_QWORD *)(this + 56) = *((_QWORD *)a2 + 7);
    *(_QWORD *)(this + 64) = *((_QWORD *)a2 + 8);
    *(_OWORD *)(this + 72) = *(_OWORD *)((char *)a2 + 72);
    *((_QWORD *)a2 + 7) = v5;
    *((_QWORD *)a2 + 8) = v6;
    *(_OWORD *)((char *)a2 + 72) = v13;
    v7 = this + 72;
    if ( *(Caver::Proto::PackedMesh **)(this + 56) == (Caver::Proto::PackedMesh *)((char *)a2 + 72) )
    {
      *(_QWORD *)(this + 56) = v7;
      if ( *((_QWORD *)a2 + 7) != v7 )
        goto LABEL_6;
    }
    else if ( v5 != v7 )
    {
      goto LABEL_6;
    }
    *((_QWORD *)a2 + 7) = (char *)a2 + 72;
LABEL_6:
    v8 = *(_QWORD *)(this + 96);
    v9 = *(_QWORD *)(this + 104);
    v14 = *(_OWORD *)(this + 112);
    *(_QWORD *)(this + 96) = *((_QWORD *)a2 + 12);
    *(_QWORD *)(this + 104) = *((_QWORD *)a2 + 13);
    *(_OWORD *)(this + 112) = *((_OWORD *)a2 + 7);
    *((_QWORD *)a2 + 12) = v8;
    *((_QWORD *)a2 + 13) = v9;
    *((_OWORD *)a2 + 7) = v14;
    v10 = this + 112;
    if ( *(Caver::Proto::PackedMesh **)(this + 96) == (Caver::Proto::PackedMesh *)((char *)a2 + 112) )
    {
      *(_QWORD *)(this + 96) = v10;
      if ( *((_QWORD *)a2 + 12) != v10 )
        goto LABEL_8;
    }
    else if ( v8 != v10 )
    {
LABEL_8:
      v11 = *(_QWORD *)(this + 136);
      *(_QWORD *)(this + 136) = *((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 17) = v11;
      LODWORD(v11) = *(_DWORD *)(this + 144);
      *(_DWORD *)(this + 144) = *((_DWORD *)a2 + 36);
      *((_DWORD *)a2 + 36) = v11;
      LODWORD(v11) = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 2) = v11;
      return this;
    }
    *((_QWORD *)a2 + 12) = (char *)a2 + 112;
    goto LABEL_8;
  }
  return this;
}

