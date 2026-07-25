/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DA760
 * Mangled: _ZN5Caver5Proto15EditorViewState5ClearEv
 * Demangled: Caver::Proto::EditorViewState::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 32
 *   insn=0x00000000002DA76C string=0x00000000002DA770 "h"
 *   insn=0x00000000002DA770 string=0x00000000002DA774 ""
 *   insn=0x00000000002DA774 string=0x00000000002DA834 "h"@"
 *   insn=0x00000000002DA778 string=0x00000000002DA77C "I "
 *   insn=0x00000000002DA77C string=0x00000000002DA780 "`\n@"
 *   insn=0x00000000002DA780 string=0x00000000002DA784 ")"
 *   insn=0x00000000002DA78C string=0x00000000002DA790 ""
 *   insn=0x00000000002DA79C string=0x00000000002DA7A0 "F9\n"
 *   insn=0x00000000002DA7A0 string=0x00000000002DA7A4 "hz@"
 *   insn=0x00000000002DA7A8 string=0x00000000002DA7AC "i "
 *   insn=0x00000000002DA7AC string=0x00000000002DA7B0 "`*@"
 *   insn=0x00000000002DA7B0 string=0x00000000002DA7B4 ")"
 *   insn=0x00000000002DA7BC string=0x00000000002DA7C0 ""
 *   insn=0x00000000002DA7CC string=0x00000000002DA7D0 ":9\n"
 *   insn=0x00000000002DA7D0 string=0x00000000002DA7D4 "hz@"
 *   insn=0x00000000002DA7D8 string=0x00000000002DA7DC "I "
 *   insn=0x00000000002DA7DC string=0x00000000002DA7E0 "`.@"
 *   insn=0x00000000002DA7E0 string=0x00000000002DA7E4 ")"
 *   insn=0x00000000002DA7EC string=0x00000000002DA7F0 ""
 *   insn=0x00000000002DA7FC string=0x00000000002DA800 ".9\n"
 *   insn=0x00000000002DA800 string=0x00000000002DA804 "hz@"
 *   insn=0x00000000002DA808 string=0x00000000002DA80C "ib"
 *   insn=0x00000000002DA810 string=0x00000000002DA814 "`6@"
 *   insn=0x00000000002DA814 string=0x00000000002DA818 "`"
 *   insn=0x00000000002DA818 string=0x00000000002DA81C "1"
 *   insn=0x00000000002DA81C string=0x00000000002DA820 "hz@"
 *   insn=0x00000000002DA824 string=0x00000000002DA828 "`:@"
 *   insn=0x00000000002DA828 string=0x00000000002DA82C "@"
 *   insn=0x00000000002DA82C string=0x00000000002DA830 ","
 *   insn=0x00000000002DA840 string=0x00000000002DA844 "h"
 *   insn=0x00000000002DA850 string=0x00000000002DA854 ""
 *   insn=0x00000000002DA85C string=0x00000000002DA860 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  _QWORD *v4; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 120);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 120) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::EditorViewState::_default_file_path_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 120);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 80);
      if ( (__int64 *)this != &Caver::Proto::EditorViewState::_default_inspected_object_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 120);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( (__int64 *)this != &Caver::Proto::EditorViewState::_default_inspected_template_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 120);
      }
    }
    *(_DWORD *)(v1 + 96) = 1;
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(v1 + 104);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 120);
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(v1 + 112);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD **)(*(_QWORD *)(v1 + 24) + 8 * v3);
      this = sub_568CB8(v4, 0, *(_QWORD *)(*v4 - 24LL), 0);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 32) );
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  return this;
}

