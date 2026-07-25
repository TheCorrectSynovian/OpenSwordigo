/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A5EC4
 * Mangled: _ZN5Caver14ProfileManagerC2Ev
 * Demangled: Caver::ProfileManager::ProfileManager(void)
 *
 * Callers: 1
 *   0x00000000001FE5F0  Caver::ProfileManager::ProfileManager(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000003A5EC4 string=0x00000000003A5EC8 ""
 *   insn=0x00000000003A5EC8 string=0x00000000003A5ECC "A"
 *   insn=0x00000000003A5ECC string=0x00000000003A5ED0 ""
 *   insn=0x00000000003A5EDC string=0x00000000003A5EE0 ""
 *   insn=0x00000000003A5EEC string=0x00000000003A5EF0 " "
 *   insn=0x00000000003A5EF0 string=0x00000000003A5EF4 "("
 *   insn=0x00000000003A5F00 string=0x00000000003A5F04 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileManager::ProfileManager(__int64 this)
{
  *(_QWORD *)this = &off_6CE940;
  *(_QWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = this + 16;
  *(_QWORD *)(this + 40) = this + 16;
  *(_QWORD *)(this + 48) = 0;
  *(_QWORD *)(this + 56) = 0;
  *(_QWORD *)(this + 64) = 0;
  *(_QWORD *)(this + 80) = 0;
  *(_QWORD *)(this + 96) = this + 80;
  *(_QWORD *)(this + 104) = this + 80;
  *(_QWORD *)(this + 112) = 0;
  *(_QWORD *)(this + 88) = 0;
  *(_BYTE *)(this + 120) = 0;
  *(_QWORD *)(this + 128) = 0xC059000000000000LL;
  return this;
}

