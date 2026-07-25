/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295774
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 36
 *   insn=0x0000000000295784 string=0x0000000000295788 "\n"
 *   insn=0x000000000029578C string=0x0000000000295790 "=B"
 *   insn=0x000000000029579C string=0x00000000002957A0 "|"
 *   insn=0x00000000002957A8 string=0x00000000002957AC "i"
 *   insn=0x00000000002957AC string=0x00000000002957B0 "?"
 *   insn=0x00000000002957B4 string=0x00000000002957B8 "`r@"
 *   insn=0x00000000002957B8 string=0x00000000002957BC "h"
 *   insn=0x00000000002957C4 string=0x00000000002957C8 "@"
 *   insn=0x00000000002957C8 string=0x00000000002957CC ""
 *   insn=0x00000000002957CC string=0x00000000002957D0 ""
 *   insn=0x00000000002957D4 string=0x00000000002957D8 ""
 *   insn=0x00000000002957D8 string=0x00000000002957DC ""
 *   insn=0x00000000002957E4 string=0x00000000002957E8 "i"
 *   insn=0x00000000002957E8 string=0x00000000002957EC "?"
 *   insn=0x00000000002957F0 string=0x00000000002957F4 "`~@"
 *   insn=0x00000000002957F4 string=0x00000000002957F8 "h"
 *   insn=0x0000000000295800 string=0x0000000000295804 "@"
 *   insn=0x0000000000295804 string=0x0000000000295808 ""
 *   insn=0x0000000000295808 string=0x000000000029580C ""
 *   insn=0x0000000000295810 string=0x0000000000295814 ""
 *   insn=0x0000000000295814 string=0x0000000000295818 ""
 *   insn=0x0000000000295820 string=0x0000000000295824 "i\nA"
 *   insn=0x0000000000295824 string=0x0000000000295828 "?"
 *   insn=0x0000000000295828 string=0x000000000029582C " "
 *   insn=0x000000000029582C string=0x0000000000295830 "`"
 *   insn=0x0000000000295830 string=0x0000000000295834 "h\n"
 *   insn=0x000000000029583C string=0x0000000000295840 "@"
 *   insn=0x0000000000295840 string=0x0000000000295844 ""
 *   insn=0x0000000000295844 string=0x0000000000295848 ""
 *   insn=0x0000000000295848 string=0x000000000029584C "`"
 *   insn=0x000000000029584C string=0x0000000000295878 ""
 *   insn=0x0000000000295850 string=0x0000000000295854 "h"
 *   insn=0x0000000000295854 string=0x0000000000295860 "h"
 *   insn=0x0000000000295858 string=0x000000000029585C "i*"
 *   insn=0x0000000000295864 string=0x0000000000295868 "h."
 *   insn=0x0000000000295878 string=0x000000000029587C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::ChargingMonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8
  int v12; // w8

  Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::ChargingMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9640);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 54) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 28);
    *((_DWORD *)this + 54) = v6;
    *((_QWORD *)this + 28) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v8 = v5[4];
  if ( *((_DWORD *)this + 60) != v8 )
  {
    result = (_DWORD *)*((_QWORD *)this + 31);
    *((_DWORD *)this + 60) = v8;
    *((_QWORD *)this + 31) = 0;
    if ( result )
    {
      v9 = result[2] - 1;
      result[2] = v9;
      if ( !v9 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v10 = v5[5];
  if ( *((_DWORD *)this + 66) == v10
    || (result = (_DWORD *)*((_QWORD *)this + 34), *((_DWORD *)this + 66) = v10, *((_QWORD *)this + 34) = 0, !result)
    || (v11 = result[2] - 1, (result[2] = v11) != 0) )
  {
    v12 = v5[8];
    if ( (v12 & 8) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  v12 = v5[8];
  if ( (v12 & 8) != 0 )
LABEL_13:
    *((_DWORD *)this + 74) = v5[6];
LABEL_14:
  if ( (v12 & 0x10) != 0 )
    *((_DWORD *)this + 75) = v5[7];
  return result;
}

