/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D8F24
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet17MaybeNewExtensionEiPKNS0_15FieldDescriptorEPPNS2_9ExtensionE
 * Demangled: google::protobuf::internal::ExtensionSet::MaybeNewExtension(int,google::protobuf::FieldDescriptor const*,google::protobuf::internal::ExtensionSet::Extension **)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *
 * Referenced strings: 28
 *   insn=0x00000000004D8F40 string=0x00000000004D8F44 "["
 *   insn=0x00000000004D8F44 string=0x00000000004D8F48 "h"
 *   insn=0x00000000004D8F78 string=0x00000000004D8F7C "#@"
 *   insn=0x00000000004D8F7C string=0x00000000004D8F80 "\tc"
 *   insn=0x00000000004D8F80 string=0x00000000004D8F84 "\nC"
 *   insn=0x00000000004D8F88 string=0x00000000004D8F8C "I"
 *   insn=0x00000000004D8F8C string=0x00000000004D8F90 ")"
 *   insn=0x00000000004D8F90 string=0x00000000004D8F94 ")"
 *   insn=0x00000000004D8F9C string=0x00000000004D8FA0 "l"
 *   insn=0x00000000004D8FA0 string=0x00000000004D8FA4 ""
 *   insn=0x00000000004D8FA4 string=0x00000000004D8FC4 "(#@"
 *   insn=0x00000000004D8FB4 string=0x00000000004D8FD0 "8"
 *   insn=0x00000000004D8FC8 string=0x00000000004D8FCC "\n"
 *   insn=0x00000000004D8FD4 string=0x00000000004D8FD8 "@"
 *   insn=0x00000000004D8FD8 string=0x00000000004D8FDC "#@"
 *   insn=0x00000000004D8FE4 string=0x00000000004D8FE8 ""
 *   insn=0x00000000004D8FF0 string=0x00000000004D9050 "("
 *   insn=0x00000000004D9004 string=0x00000000004D9008 "vq"
 *   insn=0x00000000004D9008 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D9028 string=0x00000000004D902C "6#"
 *   insn=0x00000000004D902C string=0x00000000004D9030 " C"
 *   insn=0x00000000004D9030 string=0x00000000004D9034 "!C"
 *   insn=0x00000000004D9034 string=0x00000000004D9038 "(G"
 *   insn=0x00000000004D9044 string=0x00000000004D9048 ""
 *   insn=0x00000000004D9054 string=0x00000000004D9058 "3"
 *   insn=0x00000000004D9058 string=0x00000000004D905C "h"
 *   insn=0x00000000004D9064 string=0x00000000004D9068 "!"
 *   insn=0x00000000004D908C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::MaybeNewExtension(
        _QWORD *a1,
        int a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // x9
  _QWORD *v9; // x23
  _QWORD *v10; // x24
  int v11; // w8
  __int64 *v12; // x9
  __int64 v13; // x25
  _BOOL4 v14; // w26
  __int64 result; // x0
  _BYTE v16[36]; // [xsp+4h] [xbp-7Ch] BYREF

  _ReadStatusReg(TPIDR_EL0);
  memset(&v16[4], 0, 32);
  v6 = a1[2];
  v9 = a1 + 1;
  if ( v6 )
  {
    do
    {
      v10 = (_QWORD *)v6;
      v11 = *(_DWORD *)(v6 + 32);
      v12 = (__int64 *)(v6 + 24);
      if ( v11 > a2 )
        v12 = v10 + 2;
      v6 = *v12;
    }
    while ( v6 );
    v13 = (__int64)v10;
    if ( v11 <= a2 )
      goto LABEL_10;
  }
  else
  {
    v10 = a1 + 1;
  }
  if ( v10 == (_QWORD *)a1[3] )
    goto LABEL_11;
  v13 = sub_54C700(v10);
LABEL_10:
  if ( *(_DWORD *)(v13 + 32) >= a2 )
  {
    result = 0;
    goto LABEL_18;
  }
LABEL_11:
  if ( v10 )
  {
    v14 = v9 == v10 || *((_DWORD *)v10 + 8) > a2;
    v13 = operator new(0x48u);
    *(_DWORD *)(v13 + 32) = a2;
    *(_OWORD *)(v13 + 36) = *(_OWORD *)v16;
    *(_OWORD *)(v13 + 52) = *(_OWORD *)&v16[16];
    *(_DWORD *)(v13 + 68) = 0;
    sub_54C8A0(v14, v13, v10, v9);
    result = 1;
    ++a1[5];
  }
  else
  {
    v13 = 0;
    result = 0;
  }
LABEL_18:
  *a4 = v13 + 40;
  *(_QWORD *)(v13 + 56) = a3;
  return result;
}

