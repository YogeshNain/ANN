/*
 * Neuron.h
 *
 *  Created on: 15-Feb-2016
 *      Author: nain
 */

#ifndef NEURON_H_
#define NEURON_H_

#include <random>

namespace OCR
{
struct Connection
{
	double weight;
	double deltaWeight;
};

class Neuron {
public:
	Neuron(unsigned numofOutputs);
	virtual ~Neuron();
	static double randomWeight(void)
	{
		return rand() / double(RAND_MAX);
	}
	void setWeight(double val)
	{
		neuron_OutputValue = val;
	}

	double getWeight() const
	{
		return neuron_OutputValue;
	}
	void feedForwad(const Layer &prevLayer);
private:
	double neuron_OutputValue;
	std::vector<Connection> neuron_OutputWeight;

};
}
#endif /* NEURON_H_ */
