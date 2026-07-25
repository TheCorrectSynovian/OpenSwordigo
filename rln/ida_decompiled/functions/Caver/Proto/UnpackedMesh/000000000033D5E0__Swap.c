/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033D5E0
 * Mangled: _ZN5Caver5Proto12UnpackedMesh4SwapEPS1_
 * Demangled: Caver::Proto::UnpackedMesh::Swap(Caver::Proto::UnpackedMesh*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 68
 *   insn=0x000000000033D5E8 string=0x000000000033D5EC "H"
 *   insn=0x000000000033D5EC string=0x000000000033D5F0 "\t"
 *   insn=0x000000000033D5F0 string=0x000000000033D5F4 "?"
 *   insn=0x000000000033D5FC string=0x000000000033D714 ""
 *   insn=0x000000000033D600 string=0x000000000033D604 "\t(A"
 *   insn=0x000000000033D608 string=0x000000000033D60C "+@"
 *   insn=0x000000000033D60C string=0x000000000033D610 ""
 *   insn=0x000000000033D610 string=0x000000000033D614 "+"
 *   insn=0x000000000033D614 string=0x000000000033D618 ""
 *   insn=0x000000000033D618 string=0x000000000033D61C " "
 *   insn=0x000000000033D620 string=0x000000000033D624 ")("
 *   insn=0x000000000033D628 string=0x000000000033D62C "*"
 *   insn=0x000000000033D62C string=0x000000000033D630 " "
 *   insn=0x000000000033D630 string=0x000000000033D634 "@"
 *   insn=0x000000000033D638 string=0x000000000033D63C ""
 *   insn=0x000000000033D640 string=0x000000000033D644 "?"
 *   insn=0x000000000033D640 string=0x000000000033D730 ""
 *   insn=0x000000000033D648 string=0x000000000033D740 "*"
 *   insn=0x000000000033D64C string=0x000000000033D650 "\t(C"
 *   insn=0x000000000033D654 string=0x000000000033D658 "+"
 *   insn=0x000000000033D658 string=0x000000000033D65C ""
 *   insn=0x000000000033D65C string=0x000000000033D660 "+"
 *   insn=0x000000000033D660 string=0x000000000033D664 ""
 *   insn=0x000000000033D664 string=0x000000000033D668 " "
 *   insn=0x000000000033D66C string=0x000000000033D670 ")("
 *   insn=0x000000000033D674 string=0x000000000033D678 "*"
 *   insn=0x000000000033D678 string=0x000000000033D67C " "
 *   insn=0x000000000033D67C string=0x000000000033D680 ""
 *   insn=0x000000000033D684 string=0x000000000033D688 ""
 *   insn=0x000000000033D68C string=0x000000000033D690 "?"
 *   insn=0x000000000033D68C string=0x000000000033D748 ""
 *   insn=0x000000000033D690 string=0x000000000033D694 " "
 *   insn=0x000000000033D694 string=0x000000000033D758 "*"
 *   insn=0x000000000033D698 string=0x000000000033D69C "\t(E"
 *   insn=0x000000000033D6A0 string=0x000000000033D6A4 "+(@"
 *   insn=0x000000000033D6A4 string=0x000000000033D6A8 "("
 *   insn=0x000000000033D6A8 string=0x000000000033D6AC "+,@"
 *   insn=0x000000000033D6AC string=0x000000000033D6B0 ","
 *   insn=0x000000000033D6B0 string=0x000000000033D6B4 " "
 *   insn=0x000000000033D6B8 string=0x000000000033D6BC ")("
 *   insn=0x000000000033D6C0 string=0x000000000033D6C4 "*"
 *   insn=0x000000000033D6C4 string=0x000000000033D6C8 " "
 *   insn=0x000000000033D6C8 string=0x000000000033D6CC "(@"
 *   insn=0x000000000033D6D0 string=0x000000000033D6D4 ""
 *   insn=0x000000000033D6D4 string=0x000000000033D6D8 "@"
 *   insn=0x000000000033D6D8 string=0x000000000033D6DC "?"
 *   insn=0x000000000033D6D8 string=0x000000000033D760 "("
 *   insn=0x000000000033D6E0 string=0x000000000033D6E4 ")8@"
 *   insn=0x000000000033D6E0 string=0x000000000033D770 "*("
 *   insn=0x000000000033D6E4 string=0x000000000033D6E8 "\n8@"
 *   insn=0x000000000033D6E8 string=0x000000000033D6EC "\t8"
 *   insn=0x000000000033D6EC string=0x000000000033D6F0 "*8"
 *   insn=0x000000000033D6F0 string=0x000000000033D6F4 ")x@"
 *   insn=0x000000000033D6F4 string=0x000000000033D6F8 "\nx@"
 *   insn=0x000000000033D6F8 string=0x000000000033D6FC "\tx"
 *   insn=0x000000000033D6FC string=0x000000000033D700 "*x"
 *   insn=0x000000000033D700 string=0x000000000033D704 ")@"
 *   insn=0x000000000033D704 string=0x000000000033D708 "\n@"
 *   insn=0x000000000033D708 string=0x000000000033D70C "\t"
 *   insn=0x000000000033D70C string=0x000000000033D710 "*"
 *   insn=0x000000000033D730 string=0x000000000033D734 ")@"
 *   insn=0x000000000033D734 string=0x000000000033D738 "?"
 *   insn=0x000000000033D748 string=0x000000000033D74C ")"
 *   insn=0x000000000033D74C string=0x000000000033D750 "?"
 *   insn=0x000000000033D750 string=0x000000000033D754 "!"
 *   insn=0x000000000033D760 string=0x000000000033D764 ")(@"
 *   insn=0x000000000033D764 string=0x000000000033D768 "?"
 *   insn=0x000000000033D778 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::Swap(__int64 this, Caver::Proto::UnpackedMesh *a2)
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
  if ( a2 != (Caver::Proto::UnpackedMesh *)this )
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
    if ( *(Caver::Proto::UnpackedMesh **)(this + 16) == (Caver::Proto::UnpackedMesh *)((char *)a2 + 32) )
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
    v5 = *(_QWORD *)(this + 48);
    v6 = *(_QWORD *)(this + 56);
    v13 = *(_OWORD *)(this + 64);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *(_QWORD *)(this + 56) = *((_QWORD *)a2 + 7);
    *(_OWORD *)(this + 64) = *((_OWORD *)a2 + 4);
    *((_QWORD *)a2 + 6) = v5;
    *((_QWORD *)a2 + 7) = v6;
    *((_OWORD *)a2 + 4) = v13;
    v7 = this + 64;
    if ( *(Caver::Proto::UnpackedMesh **)(this + 48) == (Caver::Proto::UnpackedMesh *)((char *)a2 + 64) )
    {
      *(_QWORD *)(this + 48) = v7;
      if ( *((_QWORD *)a2 + 6) != v7 )
        goto LABEL_6;
    }
    else if ( v5 != v7 )
    {
      goto LABEL_6;
    }
    *((_QWORD *)a2 + 6) = (char *)a2 + 64;
LABEL_6:
    v8 = *(_QWORD *)(this + 80);
    v9 = *(_QWORD *)(this + 88);
    v14 = *(_OWORD *)(this + 96);
    *(_QWORD *)(this + 80) = *((_QWORD *)a2 + 10);
    *(_QWORD *)(this + 88) = *((_QWORD *)a2 + 11);
    *(_OWORD *)(this + 96) = *((_OWORD *)a2 + 6);
    *((_QWORD *)a2 + 10) = v8;
    *((_QWORD *)a2 + 11) = v9;
    *((_OWORD *)a2 + 6) = v14;
    v10 = this + 96;
    if ( *(Caver::Proto::UnpackedMesh **)(this + 80) == (Caver::Proto::UnpackedMesh *)((char *)a2 + 96) )
    {
      *(_QWORD *)(this + 80) = v10;
      if ( *((_QWORD *)a2 + 10) != v10 )
        goto LABEL_8;
    }
    else if ( v8 != v10 )
    {
LABEL_8:
      v11 = *(_QWORD *)(this + 112);
      *(_QWORD *)(this + 112) = *((_QWORD *)a2 + 14);
      *((_QWORD *)a2 + 14) = v11;
      LODWORD(v11) = *(_DWORD *)(this + 120);
      *(_DWORD *)(this + 120) = *((_DWORD *)a2 + 30);
      *((_DWORD *)a2 + 30) = v11;
      LODWORD(v11) = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 2) = v11;
      return this;
    }
    *((_QWORD *)a2 + 10) = (char *)a2 + 96;
    goto LABEL_8;
  }
  return this;
}

