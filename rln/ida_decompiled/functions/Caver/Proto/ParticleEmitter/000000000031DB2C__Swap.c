/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031DB2C
 * Mangled: _ZN5Caver5Proto15ParticleEmitter4SwapEPS1_
 * Demangled: Caver::Proto::ParticleEmitter::Swap(Caver::Proto::ParticleEmitter*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 55
 *   insn=0x000000000031DB34 string=0x000000000031DB38 "H"
 *   insn=0x000000000031DB38 string=0x000000000031DB3C "\t"
 *   insn=0x000000000031DB3C string=0x000000000031DB40 "?"
 *   insn=0x000000000031DB48 string=0x000000000031DB4C ")"
 *   insn=0x000000000031DB48 string=0x000000000031DC18 ""
 *   insn=0x000000000031DB4C string=0x000000000031DB50 "\n"
 *   insn=0x000000000031DB50 string=0x000000000031DB54 "\t"
 *   insn=0x000000000031DB54 string=0x000000000031DB58 "*"
 *   insn=0x000000000031DB58 string=0x000000000031DB5C ")@"
 *   insn=0x000000000031DB5C string=0x000000000031DB60 "\n@"
 *   insn=0x000000000031DB60 string=0x000000000031DB64 "\t"
 *   insn=0x000000000031DB64 string=0x000000000031DB68 "*"
 *   insn=0x000000000031DB68 string=0x000000000031DB6C ")"
 *   insn=0x000000000031DB6C string=0x000000000031DB70 "\n"
 *   insn=0x000000000031DB70 string=0x000000000031DB74 "\t"
 *   insn=0x000000000031DB74 string=0x000000000031DB78 "*"
 *   insn=0x000000000031DB78 string=0x000000000031DB7C ") @"
 *   insn=0x000000000031DB7C string=0x000000000031DB80 "\n @"
 *   insn=0x000000000031DB80 string=0x000000000031DB84 "\t "
 *   insn=0x000000000031DB84 string=0x000000000031DB88 "* "
 *   insn=0x000000000031DB88 string=0x000000000031DB8C ")$@"
 *   insn=0x000000000031DB8C string=0x000000000031DB90 "\n$@"
 *   insn=0x000000000031DB90 string=0x000000000031DB94 "\t$"
 *   insn=0x000000000031DB94 string=0x000000000031DB98 "*$"
 *   insn=0x000000000031DB98 string=0x000000000031DB9C ")(@"
 *   insn=0x000000000031DB9C string=0x000000000031DBA0 "\n(@"
 *   insn=0x000000000031DBA0 string=0x000000000031DBA4 "\t("
 *   insn=0x000000000031DBA4 string=0x000000000031DBA8 "*("
 *   insn=0x000000000031DBAC string=0x000000000031DBB0 "\t(C"
 *   insn=0x000000000031DBB4 string=0x000000000031DBB8 "+"
 *   insn=0x000000000031DBB8 string=0x000000000031DBBC ""
 *   insn=0x000000000031DBBC string=0x000000000031DBC0 "+"
 *   insn=0x000000000031DBC0 string=0x000000000031DBC4 ""
 *   insn=0x000000000031DBC4 string=0x000000000031DBC8 " "
 *   insn=0x000000000031DBCC string=0x000000000031DBD0 ")("
 *   insn=0x000000000031DBD4 string=0x000000000031DBD8 "*"
 *   insn=0x000000000031DBD8 string=0x000000000031DBDC " "
 *   insn=0x000000000031DBDC string=0x000000000031DBE0 ""
 *   insn=0x000000000031DBE4 string=0x000000000031DBE8 ""
 *   insn=0x000000000031DBE8 string=0x000000000031DBEC "@"
 *   insn=0x000000000031DBEC string=0x000000000031DBF0 "?"
 *   insn=0x000000000031DBEC string=0x000000000031DC34 ""
 *   insn=0x000000000031DBF4 string=0x000000000031DBF8 ")P@"
 *   insn=0x000000000031DBF4 string=0x000000000031DC44 "*"
 *   insn=0x000000000031DBF8 string=0x000000000031DBFC "\nP@"
 *   insn=0x000000000031DBFC string=0x000000000031DC00 "\tP"
 *   insn=0x000000000031DC00 string=0x000000000031DC04 "*P"
 *   insn=0x000000000031DC04 string=0x000000000031DC08 ")@"
 *   insn=0x000000000031DC08 string=0x000000000031DC0C "\n@"
 *   insn=0x000000000031DC0C string=0x000000000031DC10 "\t"
 *   insn=0x000000000031DC10 string=0x000000000031DC14 "*"
 *   insn=0x000000000031DC20 string=0x000000000031DC24 "A"
 *   insn=0x000000000031DC34 string=0x000000000031DC38 ")"
 *   insn=0x000000000031DC38 string=0x000000000031DC3C "?"
 *   insn=0x000000000031DC4C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::Swap(__int64 this, Caver::Proto::ParticleEmitter *a2)
{
  int v2; // w10
  __int64 v3; // x10
  __int64 v4; // x10
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11
  int v8; // w10
  int v9; // w10
  __int128 v10; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != (Caver::Proto::ParticleEmitter *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v4;
    v5 = *(_QWORD *)(this + 48);
    v6 = *(_QWORD *)(this + 56);
    v10 = *(_OWORD *)(this + 64);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *(_QWORD *)(this + 56) = *((_QWORD *)a2 + 7);
    *(_OWORD *)(this + 64) = *((_OWORD *)a2 + 4);
    *((_QWORD *)a2 + 6) = v5;
    *((_QWORD *)a2 + 7) = v6;
    *((_OWORD *)a2 + 4) = v10;
    v7 = this + 64;
    if ( *(Caver::Proto::ParticleEmitter **)(this + 48) == (Caver::Proto::ParticleEmitter *)((char *)a2 + 64) )
    {
      *(_QWORD *)(this + 48) = v7;
      if ( *((_QWORD *)a2 + 6) != v7 )
        goto LABEL_4;
    }
    else if ( v5 != v7 )
    {
LABEL_4:
      v8 = *(_DWORD *)(this + 80);
      *(_DWORD *)(this + 80) = *((_DWORD *)a2 + 20);
      *((_DWORD *)a2 + 20) = v8;
      v9 = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 2) = v9;
      return this;
    }
    *((_QWORD *)a2 + 6) = (char *)a2 + 64;
    goto LABEL_4;
  }
  return this;
}

