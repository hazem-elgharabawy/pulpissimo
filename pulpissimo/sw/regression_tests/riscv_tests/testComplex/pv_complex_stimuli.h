/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * Mantainer: Luca Valente, luca.valente2@unibo.it
 */
#ifndef PVCOMPLEX
#define PVCOMPLEX
int cplx_opA[] = {
0x2058aacd,
0x99c1628,
0x3d1095b3,
0xb5a7317f,
0xe9785a99,
0x87435b57,
0x27f0048d,
0x626f1a89,
0x3bd9270d,
0xdbd3a924,
0x2019aaee,
0x4c19f22e,
0x3620b449,
0xa5941f54,
0x5e159c30,
0x46fdf426,
0xa4e7e6d,
0x14205099,
0x8218475e,
0xa1f8c9c8,
0x251f6b91,
0x701e293b,
0x43c44d10,
0x741dd28e,
0x7bb27f9d,
0x2a8c4ff0,
0x421f9bcb,
0x501476a5,
0x95f9783f,
0x146ff5a9,
0xe9cff40e,
0x727c5b6c,
0xac06f41e,
0x3b7c869c,
0x50642e1e,
0x99afdd74,
0x6af7584,
0xc29409ce,
0xdc5c4a74,
0xca1136b1,
0x86a1580e,
0xf3d9f49d,
0x6b42c8c0,
0x40ff43ed,
0x3996013b,
0xf54a556e,
0xb0db2366,
0x178467c6,
0xee625ce1,
0x8aff5300,
0x30753ec7,
0xb44b24af,
0x2e7d3724,
0x819876df,
0xad900ad9,
0x62e74baa,
0x40473431,
0xfcf256c0,
0x9aadab8a,
0xacc53df1,
0x9360d444,
0xf7aaa20f,
0x9d5443b,
0xa11c0f2e,
0x622ef838,
0x36ff2c1b,
0x50ca92a3,
0xc9c8eb4a,
0x62297f47,
0x8a204b60,
0x970a0fb9,
0x43eaed07,
0x43c7d752,
0x82dc40dc,
0x7ecede75,
0xb2b92fa1,
0xd1b1122e,
0x5669aa63,
0xb991db86,
0xd3bef785,
0x23a01bbf,
0xae630abd,
0xf607746b,
0xf3b2782b,
0xc38b5830,
0x67e97dd3,
0x6ada5a96,
0x31e8abd4,
0xecb0aea2,
0x8d17b4c4,
0xe4656b7e,
0x7dac3fd0,
0xea33b616,
0x919dd415,
0xcb9aa3c4,
0xbf83655b,
0x7019ef3b,
0x63a66de6,
0xe6116620,
0xbe515758,
};

int cplx_opB[] = {
0xd52ba99d,
0x433263a,
0xd20e4006,
0xeea8361b,
0xeadfbebf,
0x2a3d7bbf,
0xbb8fcf44,
0x855ba7ea,
0x7bffa5c2,
0x498616f8,
0x7c53479a,
0x36d50909,
0x76f0ec6c,
0x528d9a7b,
0xf1d35d01,
0x69e10de,
0x3718c6ff,
0x7050ad1,
0x40ec0927,
0xc7e6f5ad,
0x716c2bcb,
0xfb10f223,
0x9a0d2cfb,
0xd2bd806b,
0x9763160d,
0x5da71c43,
0x254c13b6,
0x23947c,
0x2ef79c3c,
0xf93e52b0,
0x638e20ca,
0xe7c9ffdc,
0xaae9aa6,
0xa3cdeece,
0xe47b4b9a,
0x77666bb3,
0x5dd755e7,
0x82e27276,
0xf2e1f7e4,
0xdf1559f,
0x71e28a44,
0x9dfa6b98,
0x14972f,
0x336b9e1d,
0xf0cd2f0b,
0x4fd62ca9,
0x2c86545b,
0xef02379f,
0x266e3734,
0x82ce92cf,
0xfe830ae9,
0x60d1fa34,
0x6caa5c5a,
0x543ee3b3,
0x39535f8b,
0xe9cf6230,
0xcdc8ab35,
0x426487ca,
0x25e7cddd,
0xfce875d0,
0xa27916b5,
0x6b104cbe,
0x845eceff,
0x6335a12,
0xece2aacc,
0xb5b58902,
0x8336eb65,
0x47bf1686,
0xfa3aefe1,
0x4f6c9bfd,
0xfe2d338d,
0xdec2393c,
0xc106cbf6,
0x99d32127,
0x96f7e6ed,
0xfda296bb,
0xe37a3970,
0x87068b3,
0xc2c567d8,
0x12a40ea3,
0x97a5afa7,
0x9b0cc859,
0xdee01adc,
0xabde2cb,
0x7ec9d91a,
0xca75a29,
0x93657cf6,
0x48eceb69,
0xc90546b,
0x3b59e2bf,
0x797ba387,
0xdcf838fb,
0xa1ae5cf5,
0xc4cde568,
0xf40b6474,
0x141bd771,
0x9fca8bb1,
0xa68daf28,
0x91f37eaa,
0x57c4b14a,
};

int subrotmj_opC[] = {
0xfed04b2d,
0x10120569,
0xaa536b02,
0x49cc6ff,
0x6426fe99,
0x20685d06,
0xcab76c61,
0x8d61dd14,
0x7eb5bfda,
0x6dd4924d,
0x9caca3c6,
0x16db1544,
0x3823bf30,
0x7b275307,
0xc0d16c42,
0x1cb8405f,
0x4892d336,
0xba380d1b,
0xc1c9412c,
0x2be5da12,
0xc03ab3b3,
0xc8e8750e,
0xdfeba9b7,
0xaddda160,
0x9670e44f,
0xcc53cce5,
0x77eb1cd3,
0x1dd74ff1,
0x23fd6702,
0x5d071b31,
0x2cbc8641,
0xa4708ab3,
0xa688a158,
0x683297af,
0x1d7c6be9,
0x8e3f2249,
0xe063a8d8,
0x68a83fb2,
0xad70e97b,
0x1eeebc20,
0x323614bf,
0x76fb55df,
0xce6f6b2e,
0x5a300d94,
0x2dd048c9,
0xd73ba574,
0x30f58455,
0xcfd92882,
0xda53c7f4,
0x3fcf0831,
0xcc2231f2,
0xd585537a,
0x2536c1d3,
0x6cd42d5a,
0x54b2743d,
0x16867918,
0x7704727f,
0x310aba8e,
0x225374c6,
0x37dfafdd,
0x4271f0e7,
0xaaaf8c9a,
0x8ac48577,
0x4ae49ae9,
0xb294754c,
0x5ce7814a,
0x58c2cd94,
0x2b3c8209,
0x709a67ef,
0x509d3ab4,
0x23d498dd,
0x4c356528,
0xf4a482c1,
0xe04be909,
0x878e7d7,
0x671ab517,
0x2742ee37,
0xbe504df9,
0x8c52f6cc,
0x171ec11a,
0x93e88bfb,
0xbd9c1357,
0xa6711727,
0x6aa0e8f5,
0x80ea44c2,
0xdc565b42,
0x2260d775,
0x3f95e8fc,
0xa5c9e020,
0x2dfb51be,
0x38096aea,
0xf92ba0b4,
0xa6df4885,
0x1153ccd0,
0xc0b0d78f,
0x7216ab68,
0x9c76d04f,
0x4142bd19,
0x188a541e,
0x59f2668d,
};

int cplxconj_opC[] = {
0xdfa8aacd,
0xf6641628,
0xc2f095b3,
0x4a59317f,
0x16885a99,
0x78bd5b57,
0xd810048d,
0x9d911a89,
0xc427270d,
0x242da924,
0xdfe7aaee,
0xb3e7f22e,
0xc9e0b449,
0x5a6c1f54,
0xa1eb9c30,
0xb903f426,
0xf5b27e6d,
0xebe05099,
0x7de8475e,
0x5e08c9c8,
0xdae16b91,
0x8fe2293b,
0xbc3c4d10,
0x8be3d28e,
0x844e7f9d,
0xd5744ff0,
0xbde19bcb,
0xafec76a5,
0x6a07783f,
0xeb91f5a9,
0x1631f40e,
0x8d845b6c,
0x53faf41e,
0xc484869c,
0xaf9c2e1e,
0x6651dd74,
0xf9517584,
0x3d6c09ce,
0x23a44a74,
0x35ef36b1,
0x795f580e,
0xc27f49d,
0x94bec8c0,
0xbf0143ed,
0xc66a013b,
0xab6556e,
0x4f252366,
0xe87c67c6,
0x119e5ce1,
0x75015300,
0xcf8b3ec7,
0x4bb524af,
0xd1833724,
0x7e6876df,
0x52700ad9,
0x9d194baa,
0xbfb93431,
0x30e56c0,
0x6553ab8a,
0x533b3df1,
0x6ca0d444,
0x856a20f,
0xf62b443b,
0x5ee40f2e,
0x9dd2f838,
0xc9012c1b,
0xaf3692a3,
0x3638eb4a,
0x9dd77f47,
0x75e04b60,
0x68f60fb9,
0xbc16ed07,
0xbc39d752,
0x7d2440dc,
0x8132de75,
0x4d472fa1,
0x2e4f122e,
0xa997aa63,
0x466fdb86,
0x2c42f785,
0xdc601bbf,
0x519d0abd,
0x9f9746b,
0xc4e782b,
0x3c755830,
0x98177dd3,
0x95265a96,
0xce18abd4,
0x1350aea2,
0x72e9b4c4,
0x1b9b6b7e,
0x82543fd0,
0x15cdb616,
0x6e63d415,
0x3466a3c4,
0x407d655b,
0x8fe7ef3b,
0x9c5a6de6,
0x19ef6620,
0x41af5758,
};

#endif
