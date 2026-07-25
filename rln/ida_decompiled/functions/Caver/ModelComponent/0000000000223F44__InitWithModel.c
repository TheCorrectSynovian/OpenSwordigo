/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223F44
 * Mangled: _ZN5Caver14ModelComponent13InitWithModelERKN5boost10shared_ptrIKNS_5ModelEEE
 * Demangled: Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callers: 1
 *   0x00000000001FB5B0  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002021C0  Caver::ModelInstance::~ModelInstance()
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *   0x0000000000224024  Caver::ModelComponent::setModelName(std::string const&)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000223F58 string=0x0000000000223F5C "`"
 *   insn=0x0000000000223F68 string=0x0000000000223F6C "\n"
 *   insn=0x0000000000223F68 string=0x0000000000223F78 "tB@"
 *   insn=0x0000000000223F6C string=0x0000000000223F70 "J"
 *   insn=0x0000000000223F70 string=0x0000000000223F74 "\n"
 *   insn=0x0000000000223F78 string=0x0000000000223F7C "i"
 *   insn=0x0000000000223F7C string=0x0000000000223F80 "4"
 *   insn=0x0000000000223F80 string=0x0000000000223FC4 "tF@"
 *   insn=0x0000000000223F84 string=0x0000000000223F88 ""
 *   insn=0x0000000000223F98 string=0x0000000000223F9C "\t@"
 *   insn=0x0000000000223FA4 string=0x0000000000223FA8 ""
 *   insn=0x0000000000223FB8 string=0x0000000000223FBC "@"
 *   insn=0x0000000000223FD0 string=0x0000000000223FD4 "{x"
 *   insn=0x0000000000223FDC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000223FE8 string=0x0000000000223FEC "h"
 *   insn=0x0000000000223FFC string=0x0000000000224000 " "
 *   insn=0x000000000022401C string=0x0000000000224020 ")v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelComponent::InitWithModel(Caver::Component *a1, __int64 *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::ModelInstance *v9; // x20
  __int64 result; // x0

  sub_56A6A8((char *)a1 + 112);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)a1 + 16);
  *((_QWORD *)a1 + 15) = v5;
  *((_QWORD *)a1 + 16) = v4;
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
  v9 = (Caver::ModelInstance *)*((_QWORD *)a1 + 17);
  *((_QWORD *)a1 + 17) = 0;
  if ( v9 )
  {
    Caver::ModelInstance::~ModelInstance(v9);
    operator delete(v9);
  }
  result = Caver::Component::ShouldPrepare(a1);
  if ( (result & 1) != 0 )
    return (*(__int64 (__fastcall **)(Caver::Component *))(*(_QWORD *)a1 + 64LL))(a1);
  return result;
}

