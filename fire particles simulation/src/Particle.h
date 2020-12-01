
#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace localnp {

struct Particle {
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

} /* namespace localnp */

#endif /* PARTICLE_H_ */
