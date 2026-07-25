/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC6B0
 * Mangled: _ZN5Caver5Proto7MapNode10SharedCtorEv
 * Demangled: Caver::Proto::MapNode::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000002DC6B0 string=0x00000000002DC6B4 "H "
 *   insn=0x00000000002DC6B4 string=0x00000000002DC6B8 "=D"
 *   insn=0x00000000002DC6C0 string=0x00000000002DC6C4 "H "
 *   insn=0x00000000002DC6C4 string=0x00000000002DC6C8 ""
 *   insn=0x00000000002DC6C8 string=0x00000000002DC6CC "8"
 *   insn=0x00000000002DC6CC string=0x00000000002DC6D0 "H "
 *   insn=0x00000000002DC6D0 string=0x00000000002DC6D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::MapNode::SharedCtor(Caver::Proto::MapNode *this)
{
  __n128 result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::MapNode::_default_level_name_;
  *((_QWORD *)this + 14) = &Caver::Proto::MapNode::_default_music_;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 100) = 0;
  *((_DWORD *)this + 26) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::MapNode::_default_title_;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_BYTE *)this + 128) = 0;
  *(__n128 *)((char *)this + 24) = result;
  *((_DWORD *)this + 33) = 0;
  return result;
}

