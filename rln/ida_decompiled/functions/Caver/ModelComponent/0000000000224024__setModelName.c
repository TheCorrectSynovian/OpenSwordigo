/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000224024
 * Mangled: _ZN5Caver14ModelComponent12setModelNameERKSs
 * Demangled: Caver::ModelComponent::setModelName(std::string const&)
 *
 * Callers: 2
 *   0x0000000000201B60  Caver::ModelComponent::setModelName(std::string const&)
 *   0x0000000000223F44  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002021C0  Caver::ModelInstance::~ModelInstance()
 *   0x00000000002240E4  Caver::ModelComponent::LoadModel(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000224030 string=0x0000000000224034 "`"
 *   insn=0x0000000000224038 string=0x000000000022403C "tB@"
 *   insn=0x0000000000224044 string=0x0000000000224078 "tF@"
 *   insn=0x0000000000224048 string=0x000000000022404C ""
 *   insn=0x0000000000224050 string=0x0000000000224054 "!"
 *   insn=0x000000000022405C string=0x0000000000224060 "\t@"
 *   insn=0x0000000000224068 string=0x000000000022406C ""
 *   insn=0x0000000000224078 string=0x000000000022407C "T"
 *   insn=0x0000000000224084 string=0x0000000000224088 "Nx"
 *   insn=0x0000000000224090 string=0x0000000000224094 "h"
 *   insn=0x0000000000224090 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002240A4 string=0x00000000002240A8 " "
 *   insn=0x00000000002240B0 string=0x00000000002240B4 "@"
 *   insn=0x00000000002240B8 string=0x00000000002240BC "tF@"
 *   insn=0x00000000002240D4 string=0x00000000002240D8 "vL"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelComponent::setModelName(_QWORD *a1)
{
  __int64 result; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  Caver::ModelInstance *v6; // x20

  result = sub_56A6A8(a1 + 14);
  v3 = (_QWORD *)a1[16];
  a1[15] = 0;
  a1[16] = 0;
  if ( !v3
    || (v4 = v3[1] - 1LL, (v3[1] = v4) != 0)
    || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3), v5 = v3[2] - 1LL, (v3[2] = v5) != 0) )
  {
    v6 = (Caver::ModelInstance *)a1[17];
    if ( !v6 )
      return result;
    goto LABEL_5;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  v6 = (Caver::ModelInstance *)a1[17];
  if ( v6 )
  {
LABEL_5:
    a1[17] = 0;
    Caver::ModelInstance::~ModelInstance(v6);
    operator delete(v6);
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
  }
  return result;
}

