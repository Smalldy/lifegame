#ifndef LIFE_H_INCLUDED
#define LIFE_H_INCLUDED
/*
������



*/
class LIFE
{
private:
    //��������
    int _HealthPoint;
    int _AttackPower;
    int _SpeedVal;
    int _RecoverVal;
    int _MentalVal;
    //�ɳ�ֵ
    int _HPstep;
    int _APstep;
    int _SVstep;
    int _RVstep;
    int _MVstep;
public:
    /**�����!
    *���ø������Եĳɳ�ֵ
    *��������Ϊ:����ֵ�ɳ�,�������ɳ�,�ٶ�ֵ�ɳ�,�ظ��ٶȳɳ�,����ֵ�ɳ�
    */
    void setStep(int HPstep,int APstep, int SVstep, int RVstep, int MVstep);
    /**δ���!
    *������������,�����������
    */
    void DistributionPoints();
    /**δ���!
    *�������� ���һ����������
    */
    void lifeEvolution();
};
//---------------------------------ʵ��-----------------------------------
void LIFE::setStep(int HPstep,int APstep, int SVstep, int RVstep, int MVstep))
{
    _HPstep = HPstep;
    _APstep = APstep;
    _SVstep = SVstep;
    _RVstep = RVstep;
    _MVstep = MVstep;
}

#endif // LIFE_H_INCLUDED
