/*
 * Net.h
 *
 *  Created on: 14-Feb-2016
 *      Author: nain
 */

#ifndef NET_H_
#define NET_H_

#include "Neuron.h"
#include <vector>


namespace OCR{

//class Neuron;
typedef std::vector<Neuron> Layer;

class Net {
public:
	Net(const std::vector<unsigned> &topology);
	virtual ~Net();
	void feedForward(const std::vector<double> &inputValues);
	void backProp(const std::vector<double> &targetValues);
	void getResults(const std::vector<double> &resultValues) const;

private:
	std::vector<Layer> net_Layers; // net_Layers[layerNo.][neuron index]
};
}
#endif /* NET_H_ */
