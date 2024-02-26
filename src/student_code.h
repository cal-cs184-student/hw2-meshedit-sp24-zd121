#ifndef STUDENT_CODE_H
#define STUDENT_CODE_H

#include "halfEdgeMesh.h"
#include "bezierPatch.h"
#include "bezierCurve.h"

using namespace std; 
// ����ζ�Ŵ����е����� std �����ռ��µķ��Ŷ�����ֱ��ʹ�ã�
// ������Ҫ��ʹ������ʱ���� std:: ǰ׺

namespace CGL {

  class MeshResampler{

  public:

    MeshResampler(){};
    ~MeshResampler(){}

    void upsample(HalfedgeMesh& mesh);
  };
}

#endif // STUDENT_CODE_H
