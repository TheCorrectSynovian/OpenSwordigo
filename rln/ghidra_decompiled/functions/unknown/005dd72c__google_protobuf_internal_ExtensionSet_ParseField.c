/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dd72c
 * Function: google::protobuf::internal::ExtensionSet::ParseField
 * Signature: undefined __thiscall ParseField(ExtensionSet * this, uint param_1, CodedInputStream * param_2, ExtensionFinder * param_3, FieldSkipper * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ParseField(unsigned int,
   google::protobuf::io::CodedInputStream*, google::protobuf::internal::ExtensionFinder*,
   google::protobuf::internal::FieldSkipper*) */

void __thiscall
google::protobuf::internal::ExtensionSet::ParseField
          (ExtensionSet *this,uint param_1,CodedInputStream *param_2,ExtensionFinder *param_3,
          FieldSkipper *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  LogMessage *pLVar9;
  string *psVar10;
  long *plVar11;
  uchar uVar12;
  uchar uVar13;
  double dVar14;
  uint uVar15;
  LogFinisher aLStack_a0 [8];
  LogMessage aLStack_98 [36];
  uint local_74;
  byte local_70;
  char local_6f;
  char local_6e;
  MessageLite *local_68;
  undefined8 uStack_60;
  FieldDescriptor *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = param_1 >> 3;
  uVar7 = (**(code **)(*(long *)param_3 + 0x10))(param_3,uVar4,&local_70);
  if ((uVar7 & 1) == 0) {
LAB_005dd7dc:
                    /* catch() { ... } // from try @ 005dd6bc with catch @ 005dd7e0 */
    (**(code **)(*(long *)param_4 + 0x10))(param_4,param_2,param_1);
    goto switchD_005dd840_default;
  }
  if (local_6e == '\0') {
                    /* catch() { ... } // from try @ 005dd6a8 with catch @ 005dd7d8 */
    if ((param_1 & 7) != *(uint *)(PTR_kWireTypeForFieldType_007e6e08 + (ulong)local_70 * 4))
    goto LAB_005dd7dc;
  }
  else if ((param_1 & 7) != 2) goto LAB_005dd7dc;
  if (local_6e != '\0') {
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_74 = (uint)*pbVar1;
      *(byte **)(param_2 + 8) = pbVar1 + 1;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,&local_74);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    }
    iVar5 = io::CodedInputStream::PushLimit(param_2,local_74);
                    /* try { // try from 005dd8ac to 006dd907 has its CatchHandler @ 005dd8ac
                       catch() { ... } // from try @ 005dd8ac with catch @ 005dd8ac
                       catch() { ... } // from try @ 005dd914 with catch @ 005dd8ac
                       catch() { ... } // from try @ 005dd954 with catch @ 005dd8ac
                       catch() { ... } // from try @ 005dd9bc with catch @ 005dd8ac
                       catch() { ... } // from try @ 005dd9fc with catch @ 005dd8ac
                       catch() { ... } // from try @ 005ddd98 with catch @ 005dd8ac
                       catch() { ... } // from try @ 005de138 with catch @ 005dd8ac */
    switch(local_70) {
    case 1:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        uVar7 = io::CodedInputStream::ReadLittleEndian64Fallback(param_2,&local_50);
        if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        AddDouble(this,uVar4,'\x01',true,local_50,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 2:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        uVar7 = io::CodedInputStream::ReadLittleEndian32Fallback(param_2,(uint *)&local_50);
        if ((uVar7 & 1) == 0) goto LAB_005de4e4;
                    /* try { // try from 005ddd14 to 006ddd1b has its CatchHandler @ 005de0ec */
        AddFloat(this,uVar4,'\x02',true,(float)local_50,local_58);
                    /* try { // try from 005ddd1c to 006ddd27 has its CatchHandler @ 005de088 */
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 3:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
          local_50 = (double)(ulong)*pbVar1;
          *(byte **)(param_2 + 8) = pbVar1 + 1;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint64Fallback(param_2,&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        }
        AddInt64(this,uVar4,'\x03',true,(long)local_50,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 4:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
          local_50 = (double)(ulong)*pbVar1;
          *(byte **)(param_2 + 8) = pbVar1 + 1;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint64Fallback(param_2,&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        }
        AddUInt64(this,uVar4,'\x04',true,(ulong)local_50,local_58);
                    /* try { // try from 005ddbfc to 006ddc07 has its CatchHandler @ 005ddeec */
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 5:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
                    /* try { // try from 005dd9f0 to 006dd9fb has its CatchHandler @ 005ddf30 */
        pbVar1 = *(byte **)(param_2 + 8);
                    /* try { // try from 005dd9fc to 006dda33 has its CatchHandler @ 005dd8ac */
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
          local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
          local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
          *(byte **)(param_2 + 8) = pbVar1 + 1;
          uVar15 = (uint)bVar2;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
          uVar15 = (uint)(float)local_50;
        }
                    /* try { // try from 005dda34 to 006dda57 has its CatchHandler @ 005ddfe0 */
        AddInt32(this,uVar4,'\x05',true,uVar15,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 6:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        uVar7 = io::CodedInputStream::ReadLittleEndian64Fallback(param_2,&local_50);
        if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        AddUInt64(this,uVar4,'\x06',true,(ulong)local_50,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 7:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        uVar7 = io::CodedInputStream::ReadLittleEndian32Fallback(param_2,(uint *)&local_50);
        if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        AddUInt32(this,uVar4,'\a',true,(uint)(float)local_50,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 8:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
          local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
          local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
          *(byte **)(param_2 + 8) = pbVar1 + 1;
          uVar15 = (uint)bVar2;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
          uVar15 = (uint)(float)local_50;
        }
        AddBool(this,uVar4,'\b',true,uVar15 != 0,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
                    /* try { // try from 005ddc88 to 006ddca3 has its CatchHandler @ 005ddee8 */
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      LogMessage::LogMessage(aLStack_98,3,&DAT_00698a0c,0x308);
      pLVar9 = (LogMessage *)
               LogMessage::operator<<(aLStack_98,"Non-primitive types can\'t be packed.");
      LogFinisher::operator=(aLStack_a0,pLVar9);
      LogMessage::~LogMessage(aLStack_98);
      break;
    case 0xd:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
          local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
          local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
          *(byte **)(param_2 + 8) = pbVar1 + 1;
          uVar15 = (uint)bVar2;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
          uVar15 = (uint)(float)local_50;
        }
        AddUInt32(this,uVar4,'\r',true,uVar15,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 0xe:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
          local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
          local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
          *(byte **)(param_2 + 8) = pbVar1 + 1;
          uVar15 = (uint)bVar2;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
          uVar15 = (uint)(float)local_50;
        }
        uVar7 = (*(code *)local_68)(uStack_60,uVar15);
        if ((uVar7 & 1) != 0) {
          AddEnum(this,uVar4,'\x0e',true,uVar15,local_58);
        }
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 0xf:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        uVar7 = io::CodedInputStream::ReadLittleEndian32Fallback(param_2,(uint *)&local_50);
                    /* try { // try from 005dd9ac to 006dd9bb has its CatchHandler @ 005ddf68 */
        if ((uVar7 & 1) == 0) goto LAB_005de4e4;
                    /* try { // try from 005dd9bc to 006dd9ef has its CatchHandler @ 005dd8ac */
        AddInt32(this,uVar4,'\x0f',true,(int)(float)local_50,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 0x10:
                    /* try { // try from 005ddb4c to 006ddb53 has its CatchHandler @ 005ddf28 */
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
                    /* try { // try from 005ddb54 to 006ddb5f has its CatchHandler @ 005ddef0 */
      while (0 < iVar6) {
        uVar7 = io::CodedInputStream::ReadLittleEndian64Fallback(param_2,&local_50);
        if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        AddInt64(this,uVar4,'\x10',true,(long)local_50,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 0x11:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
                    /* try { // try from 005dd914 to 006dd947 has its CatchHandler @ 005dd8ac */
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
          local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
          local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
          *(byte **)(param_2 + 8) = pbVar1 + 1;
          uVar15 = (uint)bVar2;
        }
        else {
                    /* try { // try from 005dd948 to 006dd953 has its CatchHandler @ 005ddfa8 */
          uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
                    /* try { // try from 005dd954 to 006dd9ab has its CatchHandler @ 005dd8ac */
          uVar15 = (uint)(float)local_50;
        }
        AddInt32(this,uVar4,'\x11',true,-(uVar15 & 1) ^ uVar15 >> 1,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
      break;
    case 0x12:
      iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      while (0 < iVar6) {
        pbVar1 = *(byte **)(param_2 + 8);
        if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
          local_50 = (double)(ulong)*pbVar1;
          *(byte **)(param_2 + 8) = pbVar1 + 1;
        }
        else {
          uVar7 = io::CodedInputStream::ReadVarint64Fallback(param_2,&local_50);
          if ((uVar7 & 1) == 0) goto LAB_005de4e4;
        }
                    /* try { // try from 005ddd8c to 006ddd97 has its CatchHandler @ 005ddf2c */
                    /* try { // try from 005ddd98 to 006de10f has its CatchHandler @ 005dd8ac */
        AddInt64(this,uVar4,'\x12',true,-((ulong)local_50 & 1) ^ (ulong)local_50 >> 1,local_58);
        iVar6 = io::CodedInputStream::BytesUntilLimit(param_2);
      }
    }
    io::CodedInputStream::PopLimit(param_2,iVar5);
                    /* try { // try from 005dd908 to 006dd913 has its CatchHandler @ 005de018 */
    goto switchD_005dd840_default;
  }
  switch(local_70) {
  case 1:
    uVar7 = io::CodedInputStream::ReadLittleEndian64Fallback(param_2,&local_50);
    if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    if (local_6f == '\0') {
      SetDouble(this,uVar4,'\x01',local_50,local_58);
    }
    else {
      AddDouble(this,uVar4,'\x01',false,local_50,local_58);
    }
    break;
  case 2:
    uVar7 = io::CodedInputStream::ReadLittleEndian32Fallback(param_2,(uint *)&local_50);
    if ((uVar7 & 1) == 0) goto LAB_005de4e4;
                    /* catch() { ... } // from try @ 005ddd1c with catch @ 005de088 */
    if (local_6f == '\0') {
      SetFloat(this,uVar4,'\x02',(float)local_50,local_58);
    }
    else {
      AddFloat(this,uVar4,'\x02',false,(float)local_50,local_58);
    }
    break;
  case 3:
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_50 = (double)(ulong)*pbVar1;
                    /* catch() { ... } // from try @ 005dda34 with catch @ 005ddfe0 */
      *(byte **)(param_2 + 8) = pbVar1 + 1;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint64Fallback(param_2,&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    }
    uVar12 = '\x03';
    dVar14 = local_50;
    if (local_6f != '\0') goto LAB_005de284;
LAB_005de340:
    SetInt64(this,uVar4,uVar12,(long)dVar14,local_58);
    break;
  case 4:
    pbVar1 = *(byte **)(param_2 + 8);
                    /* catch() { ... } // from try @ 005dd908 with catch @ 005de018 */
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_50 = (double)(ulong)*pbVar1;
      *(byte **)(param_2 + 8) = pbVar1 + 1;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint64Fallback(param_2,&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    }
    uVar12 = '\x04';
joined_r0x005de0e4:
    if (local_6f == '\0') {
                    /* catch() { ... } // from try @ 005ddd14 with catch @ 005de0ec */
      SetUInt64(this,uVar4,uVar12,(ulong)local_50,local_58);
    }
    else {
                    /* try { // try from 005de2bc to 006de407 has its CatchHandler @ 005de144 */
      AddUInt64(this,uVar4,uVar12,false,(ulong)local_50,local_58);
    }
    break;
  case 5:
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
                    /* catch() { ... } // from try @ 005dd9ac with catch @ 005ddf68 */
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
      *(byte **)(param_2 + 8) = pbVar1 + 1;
      uVar15 = (uint)bVar2;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
      uVar15 = (uint)(float)local_50;
    }
    uVar13 = '\x05';
    uVar12 = '\x05';
    if (local_6f == '\0') goto LAB_005de210;
LAB_005de1d8:
    AddInt32(this,uVar4,uVar12,false,uVar15,local_58);
    break;
  case 6:
    uVar7 = io::CodedInputStream::ReadLittleEndian64Fallback(param_2,&local_50);
    if ((uVar7 & 1) != 0) {
      uVar12 = '\x06';
      goto joined_r0x005de0e4;
    }
    goto LAB_005de4e4;
  case 7:
    uVar7 = io::CodedInputStream::ReadLittleEndian32Fallback(param_2,(uint *)&local_50);
    if ((uVar7 & 1) == 0) goto LAB_005de4e4;
                    /* try { // try from 005de138 to 006de143 has its CatchHandler @ 005dd8ac */
                    /* catch() { ... } // from try @ 005de110 with catch @ 005de140 */
                    /* try { // try from 005de144 to 006de23f has its CatchHandler @ 005de144
                       catch() { ... } // from try @ 005de144 with catch @ 005de144
                       catch() { ... } // from try @ 005de2bc with catch @ 005de144 */
    uVar13 = '\a';
    uVar15 = (uint)(float)local_50;
    uVar12 = uVar13;
    if (local_6f != '\0') goto LAB_005de24c;
LAB_005de14c:
    SetUInt32(this,uVar4,uVar13,uVar15,local_58);
    break;
  case 8:
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
      *(byte **)(param_2 + 8) = pbVar1 + 1;
      uVar15 = (uint)bVar2;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
      uVar15 = (uint)(float)local_50;
    }
    if (local_6f == '\0') {
      SetBool(this,uVar4,'\b',uVar15 != 0,local_58);
    }
    else {
      AddBool(this,uVar4,'\b',false,uVar15 != 0,local_58);
    }
    break;
  case 9:
    if (local_6f == '\0') {
      psVar10 = (string *)MutableString(this,uVar4,'\t',local_58);
    }
    else {
      psVar10 = (string *)AddString(this,uVar4,'\t',local_58);
    }
    uVar7 = WireFormatLite::ReadString(param_2,psVar10);
    goto joined_r0x005de3d0;
  case 10:
                    /* catch() { ... } // from try @ 005dd948 with catch @ 005ddfa8 */
    if (local_6f == '\0') {
      plVar11 = (long *)MutableMessage(this,uVar4,'\n',local_68,local_58);
    }
    else {
      plVar11 = (long *)AddMessage(this,uVar4,'\n',local_68,local_58);
    }
    iVar5 = *(int *)(param_2 + 0x38);
    *(int *)(param_2 + 0x38) = iVar5 + 1;
    if ((iVar5 < *(int *)(param_2 + 0x3c)) &&
       (uVar7 = (**(code **)(*plVar11 + 0x40))(plVar11,param_2), (uVar7 & 1) != 0)) {
      if (0 < *(int *)(param_2 + 0x38)) {
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
      }
                    /* try { // try from 005de41c to 006de633 has its CatchHandler @ 005de41c
                       catch() { ... } // from try @ 005de41c with catch @ 005de41c
                       catch() { ... } // from try @ 005de840 with catch @ 005de41c
                       catch() { ... } // from try @ 005de8bc with catch @ 005de41c
                       catch() { ... } // from try @ 005deadc with catch @ 005de41c */
      if (*(uint *)(param_2 + 0x20) == (param_1 & 0xfffffff8 | 4)) break;
    }
    goto LAB_005de4e4;
  case 0xb:
    if (local_6f == '\0') {
      plVar11 = (long *)MutableMessage(this,uVar4,'\v',local_68,local_58);
    }
    else {
      plVar11 = (long *)AddMessage(this,uVar4,'\v',local_68,local_58);
    }
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)*pbVar1);
      *(byte **)(param_2 + 8) = pbVar1 + 1;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    }
    iVar5 = *(int *)(param_2 + 0x38);
    *(int *)(param_2 + 0x38) = iVar5 + 1;
    if (iVar5 < *(int *)(param_2 + 0x3c)) {
      iVar5 = io::CodedInputStream::PushLimit(param_2,(int)(float)local_50);
      uVar7 = (**(code **)(*plVar11 + 0x40))(plVar11,param_2);
      if (((uVar7 & 1) != 0) && (param_2[0x24] != (CodedInputStream)0x0)) {
        io::CodedInputStream::PopLimit(param_2,iVar5);
        if (0 < *(int *)(param_2 + 0x38)) {
          *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
        }
        break;
      }
    }
    goto LAB_005de4e4;
  case 0xc:
                    /* catch() { ... } // from try @ 005dd9f0 with catch @ 005ddf30 */
    if (local_6f == '\0') {
      psVar10 = (string *)MutableString(this,uVar4,'\t',local_58);
    }
    else {
      psVar10 = (string *)AddString(this,uVar4,'\t',local_58);
    }
    uVar7 = WireFormatLite::ReadBytes(param_2,psVar10);
joined_r0x005de3d0:
    if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    break;
  case 0xd:
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
      *(byte **)(param_2 + 8) = pbVar1 + 1;
      uVar15 = (uint)bVar2;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
      uVar15 = (uint)(float)local_50;
    }
                    /* try { // try from 005de240 to 006de2bb has its CatchHandler @ 005de398 */
    uVar13 = '\r';
    uVar12 = '\r';
    if (local_6f == '\0') goto LAB_005de14c;
LAB_005de24c:
    AddUInt32(this,uVar4,uVar12,false,uVar15,local_58);
    break;
  case 0xe:
    pbVar1 = *(byte **)(param_2 + 8);
                    /* try { // try from 005de110 to 006de137 has its CatchHandler @ 005de140 */
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
      *(byte **)(param_2 + 8) = pbVar1 + 1;
      uVar15 = (uint)bVar2;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
      uVar15 = (uint)(float)local_50;
    }
    uVar7 = (*(code *)local_68)(uStack_60,uVar15);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*(long *)param_4 + 0x20))(param_4,uVar4,uVar15);
    }
    else if (local_6f == '\0') {
      SetEnum(this,uVar4,'\x0e',uVar15,local_58);
    }
    else {
                    /* catch() { ... } // from try @ 005de240 with catch @ 005de398 */
      AddEnum(this,uVar4,'\x0e',false,uVar15,local_58);
    }
    break;
  case 0xf:
    uVar7 = io::CodedInputStream::ReadLittleEndian32Fallback(param_2,(uint *)&local_50);
    if ((uVar7 & 1) != 0) {
      uVar12 = '\x0f';
                    /* catch() { ... } // from try @ 005ddb4c with catch @ 005ddf28 */
      uVar15 = (uint)(float)local_50;
      goto joined_r0x005de1d4;
    }
    goto LAB_005de4e4;
  case 0x10:
    uVar7 = io::CodedInputStream::ReadLittleEndian64Fallback(param_2,&local_50);
    if ((uVar7 & 1) != 0) {
      uVar12 = '\x10';
      dVar14 = local_50;
      goto joined_r0x005de33c;
    }
LAB_005de4e4:
    uVar8 = 0;
    goto LAB_005dd7f8;
  case 0x11:
    pbVar1 = *(byte **)(param_2 + 8);
                    /* catch() { ... } // from try @ 005ddc88 with catch @ 005ddee8 */
                    /* catch() { ... } // from try @ 005ddbfc with catch @ 005ddeec */
                    /* catch() { ... } // from try @ 005ddb54 with catch @ 005ddef0 */
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (bVar2 = *pbVar1, -1 < (char)bVar2)) {
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)bVar2);
      *(byte **)(param_2 + 8) = pbVar1 + 1;
      uVar15 = (uint)bVar2;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint32Fallback(param_2,(uint *)&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
      uVar15 = (uint)(float)local_50;
    }
    uVar12 = '\x11';
    uVar15 = -(uVar15 & 1) ^ uVar15 >> 1;
joined_r0x005de1d4:
    uVar13 = uVar12;
    if (local_6f != '\0') goto LAB_005de1d8;
LAB_005de210:
    SetInt32(this,uVar4,uVar13,uVar15,local_58);
    break;
  case 0x12:
    pbVar1 = *(byte **)(param_2 + 8);
    if ((pbVar1 < *(byte **)(param_2 + 0x10)) && (-1 < (char)*pbVar1)) {
      local_50 = (double)(ulong)*pbVar1;
      *(byte **)(param_2 + 8) = pbVar1 + 1;
    }
    else {
      uVar7 = io::CodedInputStream::ReadVarint64Fallback(param_2,&local_50);
      if ((uVar7 & 1) == 0) goto LAB_005de4e4;
    }
    uVar12 = '\x12';
    dVar14 = (double)(-((ulong)local_50 & 1) ^ (ulong)local_50 >> 1);
joined_r0x005de33c:
    if (local_6f == '\0') goto LAB_005de340;
LAB_005de284:
    AddInt64(this,uVar4,uVar12,false,(long)dVar14,local_58);
  }
switchD_005dd840_default:
  uVar8 = 1;
LAB_005dd7f8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


